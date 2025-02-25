#include <iostream>
#include <fstream>  // 用于文件输入输出
#include <string>
#include <sstream>  // 用于字符串流
#include <time.h>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <algorithm>
// #include<bits/stdc++.h>
using namespace std;                  

// int main()
// {
//     // int n = 0;
//     // int m = 0; 
    
//     // cin >> n >> m;

//     // vector<vector<char>> a(n,vector<char>(m));
//     // vector<vector<vector<char>>> b(n,vector<vector<char>>(m,vector<char>(m)));

//     // for(int i=0;i<n;i++)
//     // {
//     //     for(int j=0;j<m;j++)
//     //     {
//     //         cin>>a[i][j];
//     //     }
//     // }

//     // for(int i=0;i<n;i++)
//     // {
//     //     for(int j=0;j<m;j++)
//     //     {
//     //       rotate(a[i].begin(),a[i].begin()+1,a[i].end());
//     //       b[i][j]=a[i];
//     //     }
//     // }
//     // for(int i=0;i<n;i++)
//     // {
//     //     for(int j=0;j<m;j++)
//     //     {
//     //         for(int p=0;p<m;p++)
//     //         {
//     //             cout<<b[i][j][p];
//     //         }
//     //         cout<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     // auto result = mismatch(a.begin(), a.end(), b.begin());
//     // return distance(a.begin(), result.first); // 返回匹配的元素个数

//     // vector<int> a = {1,2,3,4,5,6,7,8,9,0};
//     // vector<int> b = {0,9,8,7,6,5,4,3,2,1};

//     // vector<pair<int,int> > c;

//     // for(int i=0;i<10;i++){
//     //     c.push_back(pair{a[i],b[i]});
//     // }

//     // sort(c.begin(),c.end());

//     // for(int i=0;i<10;i++){
//     //     cout<<c[i].second<<" ";
//     // }

//     // char** a = new char*[n];

//     // for (int i = 0; i < n; i++) {
//     //     a[i] = new char[m];
//     //     for (int j = 0; j < m; j++) {
//     //         cin >> a[i][j];
//     //     }
//     // }

//     // for(int i =0; i < n; i++)
//     // {
//     //     for(int j = 0; j < m; j++)
//     //     {
//     //         cout << a[i][j] << " ";
//     //     }
//     // }

//     // for(int i =0; i < n; i++)
//     //     delete[] a[i];
//     // delete[] a;

//     return 0;
// }


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

    cout<<"各边劝和："<<endl;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            e[idx++] = {i, j, sol(i, j)};
            cout<<e[idx-1].a<<" "<<e[idx-1].b<<" "<<e[idx-1].w<<" "<<endl;
        }
    }

    sort(e, e + idx, cmp);

    cout<<"排序后："<<endl;

    for(int i = 0; i < idx; i++) {
        cout<<e[i].a<<" "<<e[i].b<<" "<<e[i].w<<" "<<endl;
    }

    for (int i = 0; i < idx; i++) {
        int u = find(e[i].a), v = find(e[i].b);
        if (u != v) {
            pre[u] = v; // 并查集：并
            ans += e[i].w; // 累加权值
        }
        cout<<"u:"<<u<<" "<<"v:"<<v<<endl;
    }

    for(int i = 0; i < idx; i++) {
        cout<<pre[i]<<endl;
    }

    cout << ans;
  return 0;
}

/*
aabb    abba    bbaa    baab

abba    bbaa    baab    aabb

acca    ccaa    caac    aacc

abcd    bcda    cdab    dabc

*/
