#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// struct chd{
//     int r;
//     int c;
// };

// int main()
// {
//     int n,m,T;
//     cin>>n>>m>>T;

//     vector<vector<chd>> a(n,vector<chd>(m));
//     vector<chd> b(T);
//     vector<chd> c(T);

//     for(int i=0;i<n;i++){
//         int tmp;
//         cin>>tmp;
//         for(int j=0;j<m;j++){
//             a[i][j].r=tmp;
//         }
//     }
//     for(int i=0;i<m;i++){
//         int tmp;
//         cin>>tmp;
//         for(int j=0;j<n;j++){
//             a[j][i].c=tmp;
//         }
//     }
//     for(int i=0;i<T;i++){
//         cin>>b[i].r;
//         cin>>b[i].c;
//         cin>>c[i].r;
//         cin>>c[i].c;
//     }
//     for(int i=0;i<T;i++){
//         b[i].r-=1;
//         b[i].c-=1;
//         c[i].r-=1;
//         c[i].c-=1;
//     }
//     cout<<endl;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j].r<<" "<<a[i][j].c<<"   ";
//         }
       
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int i=0;i<T;i++){
//         cout<<i<<": "<<b[i].r<<" "<<b[i].c<<"   ";
//     }
//     cout<<endl;
//     for(int i=0;i<T;i++){
//         cout<<i<<": "<<c[i].r<<" "<<c[i].c<<"   ";
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define pp pair<int,int> 
// const int N = 2e5 + 9;
// const int inf = 0x3f3f3f3f3f3f3f3f;
// const int mod = 1e9 + 7;
 
// int R[N], C[N], p[N], q[N], prer[N], prec[N];
// int qp(int a, int n) {
//     int ans = 1;
//     while (n) {
//         if (n & 1) { ans = (ans * a) % mod; }
//         a = (a * a) % mod;
//         n >>= 1;
//     }return ans;
// }
// int calinv(int a) { return qp(a, mod - 2); }
 
// int f[N], inv[N], d[N];//f表示阶乘，d表示错排数
// int zh(int n, int m) { return f[n] * inv[m] % mod * inv[n - m] % mod; }
// void csh() {
//     f[0] = f[1] = inv[1] = inv[0] = 1;
//     for (int i = 2;i < N;i++) { f[i] = f[i - 1] * i % mod; inv[i] = (mod - mod / i) * inv[mod % i] % mod; }
//     for (int i = 1;i < N;i++) { inv[i] = inv[i - 1] * inv[i] % mod; }//求逆元的阶乘
//     d[0] = 1; d[1] = 0, d[2] = 1;
//     for (int i = 3;i < N;i++) {
//         d[i] = (i - 1) * (d[i - 1] + d[i - 2]) % mod;
//     }
// }
 
// void solve() {
//     prer[0] = prec[0] = 1;
//     csh();
//     int n, m, T;cin >> n >> m >> T;
//     map<int, int> mpr, mpc;
//     for (int i = 1;i <= n;i++)cin >> R[i], p[i] = R[i], mpr[R[i]]++;
//     for (int i = 1;i <= m;i++)cin >> C[i], q[i] = C[i], mpc[C[i]]++;
//     map<int, int> rankr, rankc;
//     sort(p + 1, p + 1 + n);
//     sort(q + 1, q + 1 + m);
//     int a = unique(p + 1, p + 1 + n) - p - 1;
//     for (int i = 1;i <= a;i++) {
//         rankr[p[i]] = i;
//         prer[i] = prer[i - 1] * mpr[p[i]] % mod;
//     }
//     a = unique(q + 1, q + 1 + m) - q - 1;
//     //cout << a << endl;
//     for (int i = 1;i <= a;i++) {
//         rankc[q[i]] = i;
//         prec[i] = prec[i - 1] * mpc[q[i]] % mod;
//     }
//     while (T--) {
//         int r1, c1, r2, c2;cin >> r1 >> c1 >> r2 >> c2;
//         if(r1==r2&&c1==c2){ cout << 1<< '\n'; continue;}
//         if (r1 != r2 && R[r1] >= R[r2]) { cout << 0 << '\n'; continue; }
//         if (c1 != c2 && C[c1] >= C[c2]) { cout << 0 << '\n'; continue; }
//         r1 = R[r1];r2 = R[r2];c1 = C[c1];c2 = C[c2];
//         if (r1 > r2 || c1 > c2) { cout << 0 << '\n'; continue; }
//         r1 = rankr[r1];r2 = rankr[r2];c1 = rankc[c1];c2 = rankc[c2];
//         int a = r2 - r1, b = c2 - c1;
//         //if (a + b == 0) { cout << 0 << '\n'; continue; }
 
//         int ans = zh(a + b, a);
//         if(r1!=r2)ans *= prer[r2 - 1] * calinv(prer[r1]) % mod;ans %= mod;
//         if(c1!=c2)ans *= prec[c2 - 1] * calinv(prec[c1]) % mod;ans %= mod;
//         cout << ans << '\n';
//     }
// }
// signed main() {
//     ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     int _ = 1;
//     //cin >> _;
//     while (_--)solve();
//     return 0;
// }
// import os
// import sys
// import bisect
// mod = 1000000007
// N = 100002  # 行/列最大可能离散化后的等级数
// M = 200002  # 组合数最大可能参数

// # 离散化函数：将数组元素替换为排序后的索引（压缩数值范围）
// def lsh(a):
//     l = len(a)
//     t = sorted(set(a))  # 去重并排序
//     for k in range(l):
//         # 找到元素在排序后数组中的位置作为新值（等级）
//         a[k] = bisect.bisect_left(t, a[k])
//     return a

// n, m, t = map(int, input().split())
// r = list(map(int, input().split()))
// c = list(map(int, input().split()))

// # 对行和列权重进行离散化处理，转换为等级（数值越大，权重越高）
// r = lsh(r)
// c = lsh(c)

// a = [0] * N  # 存储每个行等级的出现次数，并进行前缀乘积
// b = [0] * N

// # 统计每个行等级的出现次数
// for i in r:
//     a[i] += 1
// # 计算前缀乘积：a[i] 表示从等级0到i的行数乘积
// for i in range(1, n):
//     a[i] = a[i] * a[i-1]

// for i in c:
//     b[i] += 1
// for i in range(1, m):
//     b[i] = b[i] * b[i-1]

// # 快速幂函数（用于计算逆元）
// def qpow(a, pw):
//     b = 1
//     while pw > 0:
//         if pw & 1 == 1:
//             b = b * a % mod
//         a = a * a % mod
//         pw >>= 1
//     return b

// f = []  # 阶乘数组

// # 预处理阶乘数组，用于快速计算组合数
// def pre():
//     f.append(1)
//     for i in range(1, M):
//         f.append(f[i-1] * i % mod)

// # 组合数计算（使用费马小定理求逆元）
// def C(n, k):
//     return f[n] * qpow((f[k] * f[n-k]) % mod, mod-2) % mod

// pre()  # 预处理阶乘

// while t > 0:
//     # 输入处理：tr,tc是终点坐标，sr,sc是起点坐标
//     sr, sc, tr, tc = map(int, input().split())
//     sr -= 1  # 转换为0-based索引
//     sc -= 1
//     tr -= 1
//     tc -= 1

//     # 检查是否可行：起点的行/列等级必须不高于终点
//     if r[tr] < r[sr] or c[tc] < c[sc]:
//         print(0)
//     # 行和列等级都相同的情况
//     elif r[sr] == r[tr] and c[sc] == c[tc]:
//         # 起点和终点坐标相同则路径数为1，否则为0
//         print(1 if sr == tr and sc == tc else 0)
//     else:
//         x = r[tr] - r[sr]  # 行等级差
//         y = c[tc] - c[sc]  # 列等级差

//         # 计算行方向的路径数：从tr等级到sr等级的乘积
//         if sr == tr:
//             v = 1
//         else:
//             # 前缀乘积的商，表示中间等级的乘积
//             v = a[r[tr]-1] // a[r[sr]] % mod

//         # 计算列方向的路径数：从tc等级到sc等级的乘积
//         if sc == tc:
//             w = 1
//         else:
//             w = b[c[tc]-1] // b[c[sc]] % mod

//         # 总路径数 = 组合数 * 行路径数 * 列路径数
//         print(C(x + y, x) * v * w % mod)
//     t -= 1



#define int long long
const int mod = 1000000007;
const int N = 100002;  // 行/列最大可能离散化后的等级数
const int M = 200002;  // 组合数最大可能参数

// 离散化函数：将数组元素替换为排序后的索引（压缩数值范围）
vector<int> lsh(vector<int>& a) {
    vector<int> t = a;
    sort(t.begin(), t.end());
    t.erase(unique(t.begin(), t.end()), t.end());  // 去重并排序
    for (int i = 0; i < a.size(); i++) {
        // 找到元素在排序后数组中的位置作为新值（等级）
        a[i] = lower_bound(t.begin(), t.end(), a[i]) - t.begin();
    }
    return a;
}

// 快速幂函数（用于计算逆元）
int qpow(int a, int pw) {
    int b = 1;
    while (pw > 0) {
        if (pw & 1) {
            b = b * a % mod;
        }
        a = a * a % mod;
        pw >>= 1;
    }
    return b;
}

vector<int> f(M);  // 阶乘数组

// 预处理阶乘数组，用于快速计算组合数
void pre() {
    f[0] = 1;
    for (int i = 1; i < M; i++) {
        f[i] = f[i - 1] * i % mod;
    }
}

// 组合数计算（使用费马小定理求逆元）
int C(int n, int k) {
    return f[n] * qpow(f[k] * f[n - k] % mod, mod - 2) % mod;
}

int32_t main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    
    int n, m, t;
    cin >> n >> m >> t;

    vector<int> r(n), c(m);
    for (int i = 0; i < n; i++) cin >> r[i];
    for (int i = 0; i < m; i++) cin >> c[i];

    // 对行和列权重进行离散化处理，转换为等级（数值越大，权重越高）
    r = lsh(r);
    c = lsh(c);

    // 输出离散化后的结果
    cout << "\n离散化后：\n";
    for (int i = 0; i < n; i++) cout << r[i] << " ";
    cout << "\n";
    for (int i = 0; i < m; i++) cout << c[i] << " ";
    cout << "\n";

    vector<int> a(N, 0), b(N, 0);

    // 统计每个行等级的出现次数
    for (int i = 0; i < n; i++) a[r[i]]++;
    for (int i = 1; i < N; i++) a[i] = a[i] * a[i - 1] % mod;

    // 统计每个列等级的出现次数
    for (int i = 0; i < m; i++) b[c[i]]++;
    for (int i = 1; i < N; i++) b[i] = b[i] * b[i - 1] % mod;

    pre();  // 预处理阶乘

    while (t--) {
        int sr, sc, tr, tc;
        cin >> sr >> sc >> tr >> tc;
        sr--; sc--; tr--; tc--;  // 转换为0-based索引

        // 检查是否可行：起点的行/列等级必须不高于终点
        if (r[tr] < r[sr] || c[tc] < c[sc]) {
            cout << 0 << "\n";
        }
        // 行和列等级都相同的情况
        else if (r[sr] == r[tr] && c[sc] == c[tc]) {
            cout << (sr == tr && sc == tc ? 1 : 0) << "\n";
        } else {
            int x = r[tr] - r[sr];  // 行等级差
            int y = c[tc] - c[sc];  // 列等级差

            // 计算行方向的路径数：从tr等级到sr等级的乘积
            int v = (sr == tr) ? 1 : a[r[tr] - 1] * qpow(a[r[sr]], mod - 2) % mod;

            // 计算列方向的路径数：从tc等级到sc等级的乘积
            int w = (sc == tc) ? 1 : b[c[tc] - 1] * qpow(b[c[sc]], mod - 2) % mod;

            // int v,w;

            // if(sr==tr){
            //     v=1;
            // }
            // else{
            //     v=(a[r[tr]-1]/a[r[sr]])%mod;
            // }
            // if(sc==tc){
            //     w=1;
            // }
            // else{
            //     w=(b[c[tc]-1]/b[c[sc]])%mod;
            // }

            // 总路径数 = 组合数 * 行路径数 * 列路径数
            cout << C(x + y, x) * v % mod * w % mod << "\n";
        }
    }

    return 0;
}

