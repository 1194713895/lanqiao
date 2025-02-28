import os
import sys
import bisect
mod = 1000000007
N = 100002  # 行/列最大可能离散化后的等级数
M = 200002  # 组合数最大可能参数

# 离散化函数：将数组元素替换为排序后的索引（压缩数值范围）
def lsh(a):
    l = len(a)
    t = sorted(set(a))  # 去重并排序
    for k in range(l):
        # 找到元素在排序后数组中的位置作为新值（等级）
        a[k] = bisect.bisect_left(t, a[k])
    return a

n, m, t = map(int, input().split())
r = list(map(int, input().split()))
c = list(map(int, input().split()))

# 对行和列权重进行离散化处理，转换为等级（数值越大，权重越高）
r = lsh(r)
c = lsh(c)

print()
print("离散化后：")
print(r)
print(c)

a = [0] * N  # 存储每个行等级的出现次数，并进行前缀乘积
b = [0] * N

# 统计每个行等级的出现次数
for i in r:
    a[i] += 1
# 计算前缀乘积：a[i] 表示从等级0到i的行数乘积
for i in range(1, n):
    a[i] = a[i] * a[i-1]

for i in c:
    b[i] += 1
for i in range(1, m):
    b[i] = b[i] * b[i-1]

# 快速幂函数（用于计算逆元）
def qpow(a, pw):
    b = 1
    while pw > 0:
        if pw & 1 == 1:
            b = b * a % mod
        a = a * a % mod
        pw >>= 1
    return b

f = []  # 阶乘数组

# 预处理阶乘数组，用于快速计算组合数
def pre():
    f.append(1)
    for i in range(1, M):
        f.append(f[i-1] * i % mod)

# 组合数计算（使用费马小定理求逆元）
def C(n, k):
    return f[n] * qpow((f[k] * f[n-k]) % mod, mod-2) % mod

pre()  # 预处理阶乘

while t > 0:
    # 输入处理：tr,tc是终点坐标，sr,sc是起点坐标
    sr, sc, tr, tc = map(int, input().split())
    sr -= 1  # 转换为0-based索引
    sc -= 1
    tr -= 1
    tc -= 1

    # 检查是否可行：起点的行/列等级必须不高于终点
    if r[tr] < r[sr] or c[tc] < c[sc]:
        print(0)
    # 行和列等级都相同的情况
    elif r[sr] == r[tr] and c[sc] == c[tc]:
        # 起点和终点坐标相同则路径数为1，否则为0
        print(1 if sr == tr and sc == tc else 0)
    else:
        x = r[tr] - r[sr]  # 行等级差
        y = c[tc] - c[sc]  # 列等级差

        # 计算行方向的路径数：从tr等级到sr等级的乘积
        if sr == tr:
            v = 1
        else:
            # 前缀乘积的商，表示中间等级的乘积
            v = a[r[tr]-1] // a[r[sr]] % mod

        # 计算列方向的路径数：从tc等级到sc等级的乘积
        if sc == tc:
            w = 1
        else:
            w = b[c[tc]-1] // b[c[sc]] % mod

        # 总路径数 = 组合数 * 行路径数 * 列路径数
        print(C(x + y, x) * v * w % mod)
    t -= 1
