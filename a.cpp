#include <iostream>
#include <string>
#include <vector>
#include <chrono>  // 引入 chrono 库来测量时间

using namespace std;

int main() {
    // 记录开始时间
    chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();

    // 示例循环
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    // 记录结束时间
    chrono::high_resolution_clock::time_point end = chrono::high_resolution_clock::now();

    // 计算执行时间
    chrono::duration<double> duration = end - start;

    // 显示程序运行时间
    cout << "程序执行时间: " << duration.count() << " 秒" << endl;

    return 0;
}
/*
git config --global http.proxy http://172.20.10.1:7890 
git config --global https.proxy http://172.20.10.1:7890
*/
