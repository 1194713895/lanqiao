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

// 自定义比较函数
bool cmp(pair<int, int> x, pair<int, int> y) {
    return x.first > y.first;  // 按照第一个元素降序排序
}

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> x(n); //数值和封闭数个数
    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        x[i].first=b;
    }
    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        x[i].second=b;
    }
    sort(x.begin(),x.end(),cmp);
    // for(int i = 0; i < n; i++) cout << x[i].first << ' ';
    // cout<<endl;
    // for(int i = 0; i < n; i++) cout << x[i].second << ' ';

    int count=0,tmp=x[0].first;
    // cout<<tmp<<endl;

    while(1){
        count++;
        tmp>>=1;
        if(tmp==0)
            break;
    }
    // cout<<count<<endl;

    int max_t=pow(2,count)-1;

    // cout<<max_t<<endl;

    int m;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x[i].second!=j&&i!=x[j].second){
                int t=x[j].first^x[i].first;
                m=max(t,m);
                if(m==max_t)break;
            }
        }
    }
    cout<<m;
    return 0;
}
