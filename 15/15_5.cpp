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
    cout<<"b:";

    for(int i=0;i<l;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    int max=0;
    int count=0,j=0;
    vector<int> table;

    for(int i=0;i<n;i++)
    {
        int v=0;
        // int mm=a[i];
        if(a[i]<0)
        {
            if((0-a[i])>m)
            {
                count=0;
                // j++;
                // v=m;//pivot
                // for(int i=0;i<v;i++)
                // {
                //     count+=b[i];
                // }
            }
            else
            {
                int j=-a[0]+a[i];
                for(int i=j;i<pivot+1;i++)
                {
                    // cout<<"i:"<<i<<"mm:"<<mm<<" ";
                    count+=b[i];
                }
                int p=pivot+1+(m-pivot)/2;
                for(int i=pivot+1;i<p;i++)
                {
                    count+=b[i];
                }

            }
        }
        else
        {
            if((a[i])>=m)
            {
                count=0;
            }
            else
            {
                int j=-a[0]+a[i]+1;
                for(int i=pivot;i<j;i++)
                {
                    count+=b[i];
                }
                int p=pivot-(m-pivot)/2;
                for(int i=p;i<pivot;i++)
                {
                    count+=b[i];
                }

            }

        }
        
        table.push_back(count);

        if(count>max) max=count;
        count=0;
        
    }
    cout<<endl;

    for(int i=0;i<n;i++) cout<<table[i]<<" ";

    

    cout<<endl<<max;
    
}
