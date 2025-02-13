#include<iostream>
using namespace std;

int main()
{
    FILE *file = fopen("log.txt", "r");  // 打开文件 "example.txt" 以读取模式
    
    if (file == NULL) {  // 检查文件是否成功打开
        perror("文件打开失败");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {  // 逐字符读取文件
        putchar(ch);  // 输出字符到控制台
    }

    return 0;
}
