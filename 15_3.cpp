#include <iostream>
#include <fstream>  // 用于文件输入输出
#include <string>
#include <sstream>  // 用于字符串流
#include <time.h>
using namespace std;

int main() {

    // 获取开始时间
    clock_t start = clock();

    
   
    // 获取结束时间
    clock_t end = clock();

    // 计算时间差，单位为秒
    double duration = double(end - start)/ CLOCKS_PER_SEC * 1000; 

    cout << "程序运行时间为: " << duration << "ms" << endl;
    return 0;
}
