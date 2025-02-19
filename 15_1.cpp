#include <iostream>
#include <fstream>  // 用于文件输入输出
#include <string>
#include <sstream>  // 用于字符串流
#include <time.h>
using namespace std;

// long long current_time;
long long last_time;

int n=0;
int max_n=0;

int main() {

    // 获取开始时间
    clock_t start = clock();

    ifstream file;
    file.open("log.txt");  // 打开文件 "log.txt"
    
    if (!file) {  // 检查文件是否成功打开
        cout<< "文件打开失败!" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {  // 按行读取文件
        
        stringstream ss(line);  // 使用字符串流处理这一行
        char firstPart;
        char secondPart;
        long long thirdPart;

        // 读取第一个数据部分
        ss >> firstPart;  // 获取 
        
        // 读取第二个数据部分
        ss >> secondPart;  // 获取 

        ss >> thirdPart;  // 获取"数字“

        if(firstPart==secondPart)
        {
            if(thirdPart - last_time <= 1000) 
            {
                n++;
                if(n > max_n) {
                    max_n = n;
                }
            }
            else{
                n = 1;
            }
        }
        else{
            n = 0;
        }

        last_time = thirdPart;
        // // 打印提取的结果
        // cout << "第一个部分: " << firstPart << std::endl;
        // cout << "第二个部分: " << secondPart << std::endl;
        // cout << "第三个部分: " << thirdPart << std::endl;

    }
    cout << "最大连续次数: " << max_n << endl;
    file.close();  // 关闭文件

    // 获取结束时间
    clock_t end = clock();

    // 计算时间差，单位为秒
    double duration = double(end - start)/ CLOCKS_PER_SEC * 1000; 

    cout << "程序运行时间为: " << duration << "ms" << endl;
    return 0;
}
