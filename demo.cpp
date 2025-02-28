#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <fstream>  // 用于文件输入输出
#include <sstream>  // 用于字符串流
#include <time.h>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;


// int n = 0;

// int a[200000];

// int count_n = 0;

// int num = 0;

// char str[20];

// int sort_num[200000];

// void swap(int *x, int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int partition(int arr[], int num[], int low, int high){
//     int pivot = num[high];
//     int i = low -1;

//     for(int j = low; j<high; j++)
//     {
//         if(num[j] < pivot)
//         {
//             i++;
//             swap(&arr[i],&arr[j]);
//             swap(&num[i],&num[j]);
//         }
//         else if (num[j] == pivot)
//         {
//             if(arr[j] < arr[high])
//             {
//                 i++;
//                 swap(&arr[i], &arr[j]);
//                 swap(&num[i], &num[j]);
//             }
//         }
//     }

//     swap(&arr[i+1],&arr[high]);
//     swap(&num[i+1],&num[high]);

//     return i+1;
// } 

// void quickSort(int arr[], int num[], int low, int high){
//     if(low < high)
//     {
//         int pi = partition(arr, num, low ,high);

//         quickSort(arr, num, low, pi-1);
//         quickSort(arr, num, pi+1, high);
//     }
// }

// int main() {

//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         snprintf(str, sizeof(str),"%d", a[i]);
//         num = strlen(str);
//         for(int j = 0; j < num; j++)
//         {
//             int temp = str[j] - '0';
//             if(temp==0||temp==4||temp==6||temp==9)
//             {
//                 count_n++;
//             }
//             else if (temp==8)
//             {
//                 count_n+=2;
//             }
            
//         }
//         sort_num[i] = count_n;
//         num = 0;
//         memset(str,0,sizeof(str));
//         count_n=0;
//     }

//     quickSort(a, sort_num, 0, n - 1); // 对 sort_num 和 a 数组进行排序

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// int main(){
//     // char a=0x80;
//     // cout<<(short int)a<<endl;
//     // printf("%d\n",a);

//     int a[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(a)/sizeof(int);

//     quickSort(a, 0, n-1);

//     for(int i=0; i < n; i++)
//     {
//         cout<< a[i] <<" ";
//     }


//     return 0;
// }

// vector<string> org={"aabb", "abba", "acca", "abcd"};

// int n=4,m=4;

// int sol(int x, int y)
// {
//     string s=org[x], t=org[y];
//     int ans=0, tmp=0;
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             while(s[(i+tmp)%m]==t[(j+tmp)%m])
//             {
//                 tmp++;
//                 if(tmp==m) break;
//             }
//             ans=max(ans,tmp);
//             tmp=0;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//           cout<<i<<" "<<j<<" "<<sol(i, j);
//           cout<<endl;
//         }
        
//     } 
// }


#define int long long
const int mod = 1000000007;
const int N = 100002;  // 行/列最大可能离散化后的等级数
const int M = 200002;  // 组合数最大可能参数

// 快速幂函数（用于计算逆元）
int qpow(int a, int pw) {
    int b = 1;
    while (pw > 0) {
        if (pw & 1) {
            b = b * a % mod;
        }
        a = a * a % mod;
        pw >>= 1;
    }
    return b;
}

vector<int> f(M);  // 阶乘数组

// 预处理阶乘数组，用于快速计算组合数
void pre() {
    f[0] = 1;
    for (int i = 1; i < M; i++) {
        f[i] = f[i - 1] * i % mod;
    }
}

// 组合数计算（使用费马小定理求逆元）
int C(int n, int k) {
    return f[n] * qpow(f[k] * f[n - k] % mod, mod - 2) % mod;
}

int32_t main(){
    
    int a=2,b=3;
    // int ans=qpow(2,0xE);

    // cout<<ans;

    pre();

    return 0;
}

