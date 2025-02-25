#include <iostream>
#include <vector>
#include <algorithm> // std::mismatch
using namespace std;

// template<typename T>
// int count_matching_prefix(const vector<T>& a, const vector<T>& b) {
//     auto result = mismatch(a.begin(), a.end(), b.begin());
//     return distance(a.begin(), result.first); // 返回匹配的元素个数
// }

// int main() {
//     vector<int> a = {1, 2, 3, 4, 5};
//     vector<int> b = {1, 2, 3, 0, 5};
    
//     int count = count_matching_prefix(a, b);
//     cout << "The number of matching elements at the beginning is: " << count << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

const int N = 210;
int pre[N], n, m, idx, ans = 0; // pre[N]存储父节点的值

vector<string> org;
string s;

typedef struct Edge {
    int a, b, w;
} edge;
edge e[N*N];

int sol(int x, int y) { // 计算最长公共子串长度
    int ans = 0, tmp = 0;
    string s = org[x], t = org[y];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            while (s[(i+tmp)%m] == t[(j+tmp)%m]) { // 循环取余避免越界
                tmp++;
                if(tmp==m)break;
            }
        ans = max(ans,tmp);
        tmp  = 0;
        }
    }
    return ans;
}

bool cmp(edge x, edge y) { // 自定义比较函数
    return x.w > y.w;   // 根据结构体数组边矩阵的权值w来比较，从大到小的顺序
}

int find(int x) {   // 并查集：查
    if(pre[x] != x) {   // 如果x的父节点不是自己，说明x不是根
        x = find(pre[x]);   // 继续递归寻找根节点
    }
    return pre[x];
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        pre[i] = i; // 初始每个节点都是单独的节点，即根只有自己
        cin >> s;
        org.push_back(s); // vector向量，加入字符串s
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            e[idx++] = {i, j, sol(i, j)};
        }
    }

    sort(e, e + idx, cmp);

    for (int i = 0; i < idx; i++) {
        int u = find(e[i].a), v = find(e[i].b);
        if (u != v) {
            pre[u] = v; // 并查集：并
            ans += e[i].w; // 累加权值
        }
    }

    cout << ans;
  return 0;
}


// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <climits>

// using namespace std;

// // 计算两个扩展字符串的最大公共子串长度，且最大值不超过 m
// int compute_max_common(const string& s_exp, const string& t_exp, int m) {
//     int len_s = s_exp.length();
//     int len_t = t_exp.length();
//     int max_len = 0;
//     vector<int> prev(len_t, 0);
    
//     for (int i = 0; i < len_s; ++i) {
//         vector<int> curr(len_t, 0);
//         for (int j = 0; j < len_t; ++j) {
//             if (s_exp[i] == t_exp[j]) {
//                 if (i == 0 || j == 0) {
//                     curr[j] = 1;
//                 } else {
//                     curr[j] = prev[j - 1] + 1;
//                 }
//                 max_len = max(max_len, curr[j]);
//             } else {
//                 curr[j] = 0;
//             }
//         }
//         prev = curr;
//     }
    
//     return min(max_len, m);
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
    
//     vector<string> strings(n);
//     vector<string> expanded(n);
    
//     for (int i = 0; i < n; ++i) {
//         cin >> strings[i];
//         expanded[i] = strings[i] + strings[i];  // 扩展字符串
//     }
    
//     // 构建邻接矩阵
//     vector<vector<int>> adj(n, vector<int>(n, 0));
    
//     for (int i = 0; i < n; ++i) {
//         for (int j = i + 1; j < n; ++j) {
//             int max_common = compute_max_common(expanded[i], expanded[j], m);
//             adj[i][j] = adj[j][i] = max_common;
//         }
//     }
    
//     // Prim's 算法，求最大生成树的总权重
//     vector<int> key(n, INT_MIN);
//     vector<bool> visited(n, false);
//     key[0] = 0;
//     int total = 0;
    
//     for (int _ = 0; _ < n; ++_) {
//         int u = -1;
//         int max_key = INT_MIN;
        
//         // 找到未被访问且key值最大的点
//         for (int i = 0; i < n; ++i) {
//             if (!visited[i] && key[i] > max_key) {
//                 max_key = key[i];
//                 u = i;
//             }
//         }
        
//         if (u == -1) {
//             break;
//         }
        
//         visited[u] = true;
//         total += max_key;
        
//         // 更新与 u 相连的节点的 key 值
//         for (int v = 0; v < n; ++v) {
//             if (!visited[v] && adj[u][v] > key[v]) {
//                 key[v] = adj[u][v];
//             }
//         }
//     }
    
//     cout << total << endl;
    
//     return 0;
// }
