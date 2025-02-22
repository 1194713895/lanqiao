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

int n = 0;

int a[200000];

int count_n = 0;

int num = 0;

char str[20];

int  sort_num[200000];

// 快速排序的交换函数
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 快速排序的分区函数，返回基准元素的索引
int partition(int arr[], int num[], int low, int high) {
    // 选择最后一个元素作为基准
    int pivot = num[high];
    int i = low - 1;

    // 将比基准小的元素移到基准的左边，比基准大的移到右边
    for (int j = low; j < high; j++) {
        if (num[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
            swap(&num[i], &num[j]);
        }
        else if (num[j] == pivot)
        {
            if(arr[j] < arr[high])
            {
                i++;
                swap(&arr[i], &arr[j]);
                swap(&num[i], &num[j]);
            }
        }
        
    }

    // 将基准元素放到正确的位置
    swap(&arr[i + 1], &arr[high]);
    swap(&num[i + 1], &num[high]);
    return i + 1;
}

// 快速排序主函数
void quickSort(int arr[], int num[], int low, int high) {
    if (low < high) {
        // 找到基准元素的索引
        int pi = partition(arr, num, low, high);

        // 分别对基准元素左边和右边的子数组递归排序
        quickSort(arr, num, low, pi - 1);  // 排序基准左边的部分
        quickSort(arr, num, pi + 1, high); // 排序基准右边的部分
    }
}

// 打印数组
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main() {

    // // 获取开始时间
    // clock_t start = clock();

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        snprintf(str, sizeof(str),"%d", a[i]);
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
        // cout << count_n << endl;
        // cout << num << endl;
        num = 0;
        memset(str,0,sizeof(str));
        count_n=0;
    }

    quickSort(a, sort_num, 0 , n-1); // 对 sort_num 和 a 数组进行排序
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
