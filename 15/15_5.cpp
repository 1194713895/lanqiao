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
//     vector<int> a;
//     vector<int> b(0);

//     int n,m,l;

//     cin>>n>>m;

//     for(int i;i<n;i++)
//     {
//         int u;
//         cin>>u;
//         a.push_back(u);
//     }

//     sort(a.begin(),a.end());

//     l=a[n-1]-a[0]+1;
//     int tmp=0,c=a[0],pivot=0;

//     for(int i=0;i<l;i++)
//     {
//         if(c++==a[tmp])
//         {
//             if(a[tmp]==0) pivot=i;
//             tmp++;
//             b.push_back(1);
//         }
//         else{
//             b.push_back(0);
//         }
//     }
//     cout<<"b:";
//     // int y=sizeof(b)/sizeof(int);

//     // for(int o=0-y;o<0;o++)
//     // {
//     //     b[o]=0;
//     // }
//     // for(int o=y+1;o<2*y;o++)
//     // {
//     //     b[o]=0;
//     // }

//     for(int i=0;i<l;i++)
//     {
//         cout<<b[i]<<" ";
//     }
//     cout<<endl;

//     int max_n=0;
//     int count=0,j=0;

//     vector<int> table;

//     for(int i=0;i<n;i++)
//     {
//         int v=0;
//         // int mm=a[i];
//         if(a[i]<0)
//         {
//             if((0-a[i])>m)
//             {
//                 count=0;
//                 // j++;
//                 // v=m;//pivot
//                 // for(int i=0;i<v;i++)
//                 // {
//                 //     count+=b[i];
//                 // }
//             }
//             else
//             {
//                 int j=-a[0]+a[i];//cout<<"j:"<<j<<endl;
//                 for(int i=j;i<pivot+1;i++)
//                 {
//                     // cout<<"i:"<<i<<"mm:"<<mm<<" ";
//                     count+=b[i];
//                 }
//                 // int p=pivot+1+(m-pivot)/2;
//                 int p=pivot+1+(m+a[i])/2;

//                 int t1=0,t2=0;
//                 for(int i=pivot+1;i<p;i++)
//                 {
//                     // count+=b[i];
//                     t1+=b[i];
//                 }cout<<"t1:"<<t1<<endl;
//                 int q=a[i]-(m+a[i])/2;;
//                 for(int j=q;j<a[i];j++) t2+=b[j-a[0]];
//                 cout<<"t2:"<<q<<t2<<endl;
//                 int f=max(t1,t2);
//                 count+=f;

//             }
//         }
//         else
//         {
//             if((a[i])>m)
//             {
//                 count=0;
//             }
//             else
//             {
//                 int j=-a[0]+a[i]+1;
//                 for(int i=pivot;i<j;i++)
//                 {
//                     count+=b[i];
//                 }cout<<"t1:"<<count<<endl;
//                 int p=pivot-(m-a[i])/2;
//                 int t1=0,t2=0;
//                 for(int i=p;i<pivot;i++)
//                 {
//                     // count+=b[i];
//                     t1+=b[i];
//                 }
//                 // cout<<"t1:"<<t1<<endl;
//                 int q=a[i]+(m-a[i])/2;;
//                 for(int j=a[i]+1;j<q+1;j++) t2+=b[j-a[0]];
//                 // cout<<"t2:"<<q<<t2<<endl;
//                 int f=max(t1,t2);
//                 count+=f;

//             }

//         }
        
//         table.push_back(count);

//         if(count>max_n) max_n=count;
//         count=0;
        
//     }
//     cout<<endl;

//     for(int i=0;i<n;i++) cout<<table[i]<<" ";

    

//     cout<<endl<<max_n;
    
// }


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    
    // 输入矿洞位置
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // 右侧矿洞计数
    vector<int> r(m + 1, 0);
    // 左侧矿洞计数
    vector<int> l(m + 1, 0);

    // 填充矿洞信息
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0 && abs(a[i]) <= m) {
            r[a[i]]++;
        } else if (a[i] < 0 && abs(a[i]) <= m) {
            l[abs(a[i])]++;
        }
    }

    // 构造前缀和
    for (int i = 1; i <= m; ++i) {
        r[i] += r[i - 1];
        l[i] += l[i - 1];
    }

    int ans = 0;

    // 枚举步数，计算两种情况的最大值
    for (int j = 1; j <= m / 2; ++j) {
        ans = max(ans, r[j] + l[m - 2 * j]);
        ans = max(ans, l[j] + r[m - 2 * j]);
    }

    // 只向一个方向移动的情况
    ans = max(ans, r[m]);
    ans = max(ans, l[m]);

    // 原点是否有矿洞
    if (find(a.begin(), a.end(), 0) != a.end()) {
        ans++;
    }

    cout << ans << endl;

    return 0;
}
