#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;


int n = 0;

int a[200000];

int count_n = 0;

int num = 0;

char str[20];

int sort_num[200000];

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int num[], int low, int high){
    int pivot = num[high];
    int i = low -1;

    for(int j = low; j<high; j++)
    {
        if(num[j] < pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
            swap(&num[i],&num[j]);
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

    swap(&arr[i+1],&arr[high]);
    swap(&num[i+1],&num[high]);

    return i+1;
} 

void quickSort(int arr[], int num[], int low, int high){
    if(low < high)
    {
        int pi = partition(arr, num, low ,high);

        quickSort(arr, num, low, pi-1);
        quickSort(arr, num, pi+1, high);
    }
}

int main() {

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
        num = 0;
        memset(str,0,sizeof(str));
        count_n=0;
    }

    quickSort(a, sort_num, 0, n - 1); // 对 sort_num 和 a 数组进行排序

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

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

