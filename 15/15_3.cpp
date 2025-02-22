#include <iostream>
#include <fstream>  // 用于文件输入输出
#include <string>
#include <sstream>  // 用于字符串流
#include <time.h>
#include <cmath>
#include <stdio.h>
#include <string.h>
// #include<bits/stdc++.h>
using namespace std;

long long n = 0;

long long a[200000];

int count_n = 0;

int num = 0;

char str[20];

long long  sort_num[200000];
// string str = "zlm";

// void sort_a(int sort_num[], long long a[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (sort_num[j] > sort_num[j + 1])
//             {
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;

//                 int temp1 = sort_num[j];
//                 sort_num[j] = sort_num[j + 1];
//                 sort_num[j + 1] = temp1;
//             }
//             else if (sort_num[j] == sort_num[j + 1])
//             {
//                 if (a[j] > a[j + 1])
//                 {
//                     int temp = a[j];
//                     a[j] = a[j + 1];
//                     a[j + 1] = temp;

//                     int temp1 = sort_num[j];
//                     sort_num[j] = sort_num[j + 1];
//                     sort_num[j + 1] = temp1;
//                 }
//             }
//         }
//     }
// }
// 交换函数
void swap_t(long long *x, long long *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// 快速排序的分区操作
int partition(long long sort_num[], long long a[], int low, int high)
{
    int pivot = sort_num[high]; // 选择最右边的元素作为基准
    long long pivot_val = a[high]; // 该基准值对应的 a 数组中的值

    int i = low - 1; // i 为小于基准元素的部分的最后一个元素的索引

    for (int j = low; j < high; j++)
    {
        if (sort_num[j] < pivot) // 如果当前元素小于基准元素
        {
            i++;
            swap_t(&sort_num[i], &sort_num[j]); // 交换 sort_num 中的元素
            swap_t(&a[i], &a[j]); // 同时交换 a 中的对应元素
        }
        else if (sort_num[j] == pivot && a[j] < pivot_val) // 当 sort_num 相等时，按 a 数组中的值排序
        {
            i++;
            swap_t(&sort_num[i], &sort_num[j]);
            swap_t(&a[i], &a[j]);
        }
    }
    swap_t(&sort_num[i + 1], &sort_num[high]); // 将基准元素交换到正确的位置
    swap_t(&a[i + 1], &a[high]); // 同时交换 a 数组中对应的元素
    return i + 1; // 返回基准元素的索引
}

// 快速排序的递归实现
void quickSort(long long sort_num[], long long a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(sort_num, a, low, high); // 获取基准元素的索引

        quickSort(sort_num, a, low, pi - 1); // 对基准左边部分递归排序
        quickSort(sort_num, a, pi + 1, high); // 对基准右边部分递归排序
    }
}


int main() {

    // // 获取开始时间
    // clock_t start = clock();

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        snprintf(str, sizeof(str),"%lld", a[i]);
        num = strlen(str);
        for(int j = 0; j < num; j++)
        {
            int temp = str[j] - '0';
            if(temp==0||temp==4||temp==6||temp==9)
            {
                count_n++;
            }
            else if (temp==8)
            {
                count_n+=2;
            }
            
        }
        sort_num[i] = count_n;
        cout << count_n << endl;
        // cout << num << endl;
        num = 0;
        memset(str,0,sizeof(str));
        count_n=0;
    }

    quickSort(sort_num, a, 0, n - 1); // 对 sort_num 和 a 数组进行排序
    // sort_a(sort_num, a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // cout << str << endl;
    
    // // memset(str,0,sizeof(str));
    // // str.resize(0);

    // cout << str << endl;

    // // 获取结束时间
    // clock_t end = clock();

    // // 计算时间差，单位为秒
    // double duration = double(end - start)/ CLOCKS_PER_SEC * 1000; 

    // cout << "程序运行时间为: " << duration << "ms" << endl;
    return 0;
}
