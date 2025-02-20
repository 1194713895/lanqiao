#include <iostream>
#include <fstream>  // 用于文件输入输出
#include <string>
#include <sstream>  // 用于字符串流
#include <time.h>
#include <cmath>
#include <stdio.h>
#include <string.h>
using namespace std;

long long n = 0;

long long a[200000];

int count = 0;

int num = 0;

char str[20]="zlm";
// string str = "zlm";

int main() {

    // 获取开始时间
    clock_t start = clock();

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        snprintf(str, sizeof(str),"%lld", a[i]);
        num = strlen(str);
        cout << num << endl;
        memset(str,0,sizeof(str));
    }

    cout << str << endl;
    
    // // memset(str,0,sizeof(str));
    // // str.resize(0);

    // cout << str << endl;

    // 获取结束时间
    clock_t end = clock();

    // 计算时间差，单位为秒
    double duration = double(end - start)/ CLOCKS_PER_SEC * 1000; 

    cout << "程序运行时间为: " << duration << "ms" << endl;
    return 0;
}
