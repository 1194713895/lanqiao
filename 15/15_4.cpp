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
    int n = 0;
    int m = 0; 
    
    // cin >> n >> m;

    vector<int> a = {1,2,3,4,5,6,7,8,9,0};
    vector<int> b = {0,9,8,7,6,5,4,3,2,1};

    vector<pair<int,int> > c;

    for(int i=0;i<10;i++){
        c.push_back(make_pair(a[i],b[i]));
    }

    for(int i=0;i<10;i++){
        cout<<c[i].second<<" ";
    }

    // char** a = new char*[n];

    // for (int i = 0; i < n; i++) {
    //     a[i] = new char[m];
    //     for (int j = 0; j < m; j++) {
    //         cin >> a[i][j];
    //     }
    // }

    // for(int i =0; i < n; i++)
    // {
    //     for(int j = 0; j < m; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    // }

    // for(int i =0; i < n; i++)
    //     delete[] a[i];
    // delete[] a;

    return 0;
}

/*
aabb    abba    bbaa    baab

abba    bbaa    baab    aabb

acca    ccaa    caac    aacc

abcd    bcda    cdab    dabc
*/
