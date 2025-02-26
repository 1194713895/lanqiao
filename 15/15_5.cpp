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

int main()
{
    vector<int> a;
    vector<int> b;

    int n,m,l;

    cin>>n>>m;

    for(int i;i<n;i++)
    {
        int u;
        cin>>u;
        a.push_back(u);
    }

    sort(a.begin(),a.end());

    l=a[n-1]-a[0]+1;
    int tmp=0,c=a[0],pivot=0;

    for(int i=0;i<l;i++)
    {
        if(c++==a[tmp])
        {
            if(a[tmp]==0) pivot=i;
            tmp++;
            b.push_back(1);
        }
        else{
            b.push_back(0);
        }
    }

    for(int i=0;i<l;i++)
    {
        cout<<b[i]<<" ";
    }

    cout<<endl<<pivot;
    
}
