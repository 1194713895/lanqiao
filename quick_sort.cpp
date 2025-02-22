#include <stdio.h>

// 快速排序的交换函数
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 快速排序的分区函数，返回基准元素的索引
int partition(int arr[], int low, int high) {
    // 选择最后一个元素作为基准
    int pivot = arr[high];
    int i = low - 1;

    // 将比基准小的元素移到基准的左边，比基准大的移到右边
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // 将基准元素放到正确的位置
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// 快速排序主函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 找到基准元素的索引
        int pi = partition(arr, low, high);

        // 分别对基准元素左边和右边的子数组递归排序
        quickSort(arr, low, pi - 1);  // 排序基准左边的部分
        quickSort(arr, pi + 1, high); // 排序基准右边的部分
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
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    // 快速排序
    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
