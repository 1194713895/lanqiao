#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<string>
using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     vector<int> x;
//     vector<int> pre;

//     int t;

//     for(int i=0;i<n;i++){
//         cin>>t;
//         x.push_back(t);
//     }

//     for(int i=0;i<n;i++){
//         cin>>t;
//         pre.push_back(t);
//     }

//     // auto it=max_element(x.begin(),x.end());

//     // // int m=*it;
//     // int m=x[0];


//     // // int index=distance(x.begin(),find(x.begin(),x.end(),m));
//     // int index=0;

//     // for(int i=0;i<n;i++){
//     //     if(pre[index]!=i&&index!=pre[i]){
//     //         int t=m^x[i];
//     //         m=max(t,m);
//     //         cout<<i<<" ";
//     //     }
//     // }

//     int m;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(pre[i]!=j&&i!=pre[j]){
//                 int t=x[j]^x[i];
//                 m=max(t,m);
//             }
//         }
//     }

//     cout<<m;

//     return 0;
// }

// // 自定义比较函数
// bool cmp(pair<int, int> x, pair<int, int> y) {
//     return x.first > y.first;  // 按照第一个元素降序排序
// }

// int main(){
//     int n;
//     cin >> n;

//     vector<pair<int,int>> x(n); //数值和封闭数个数
//     for(int i = 0; i < n; i++){
//         int b;
//         cin >> b;
//         x[i].first=b;
//     }
//     for(int i = 0; i < n; i++){
//         int b;
//         cin >> b;
//         x[i].second=b;
//     }
//     sort(x.begin(),x.end(),cmp);
//     // for(int i = 0; i < n; i++) cout << x[i].first << ' ';
//     // cout<<endl;
//     // for(int i = 0; i < n; i++) cout << x[i].second << ' ';

//     int count=0,tmp=x[0].first;
//     // cout<<tmp<<endl;

//     while(1){
//         count++;
//         tmp>>=1;
//         if(tmp==0)
//             break;
//     }
//     // cout<<count<<endl;

//     int max_t=pow(2,count)-1;

//     // cout<<max_t<<endl;

//     int m;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(x[i].second!=j&&i!=x[j].second){
//                 int t=x[j].first^x[i].first;
//                 m=max(t,m);
//                 if(m==max_t)break;
//             }
//         }
//     }
//     cout<<m;
//     return 0;
// }


#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n; // 输入数组的大小
    int nums[n], f[n];

    // 输入 nums 数组
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    // 输入 f 数组
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }

    // 前缀加哈希
    int mask = 0; // 用于存储当前的前缀掩码
    int ans = 0;  // 最终结果
    int max_w = 30; // 假设处理的是 30 位整数

    // 从高位到低位进行处理
    for (int i = max_w; i >= 0; i--) {
        unordered_map<int, int> meo; // 哈希表，用于存储前缀值及其对应的索引
        mask |= (1 << i); // 将第 i 位加入到掩码中
        int new_ans = ans | (1 << i); // 更新当前的答案

        // 遍历数组
        for (int j = 0; j < n; j++) {
            int x = nums[j] & mask; // 获取当前元素的前缀
            int target = x ^ new_ans; // 计算目标值

            // 如果哈希表中存在目标值，并且对应的索引与当前索引不同
            if (meo.find(target) != meo.end() && f[meo[target]] != j && f[j] != meo[target]) {
                ans |= (1 << i); // 更新答案
                break;
            }
            meo[x] = j; // 将当前前缀及其索引存入哈希表
        }
    }
    cout << ans; // 输出最终结果

    return 0;
}
