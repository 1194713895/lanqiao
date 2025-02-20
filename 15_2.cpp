#include <iostream>
#include <fstream>  // 用于文件输入输出
#include <string>
#include <sstream>  // 用于字符串流
#include <time.h>
using namespace std;

int main() {

    // 获取开始时间
    clock_t start = clock();

    // 1 - 9, 2个, 1 和 3
    int b = 1;
    int a = 0;
    for(int i = 1; i < 10; i++)
    {
        a = a + i;
        b = b * i;
        if((a - b) % 100 == 0)
        cout << i << ' ';
    }
    /*
    每200个数是一个循环，因为 a = i * (i + 1) / 2，a要被100整除，则a就是100的倍数，
    那么，令a1 = 2 * a = i * (i + 1)， a1是200的倍数， 等价于a是100的倍数，
    i+200 或者 i-200 不会影响a1是200的倍数，故200是一个循环

    当i大于等于10之后，b肯定是100的倍数， 即可被100整除，所以只要a是100的倍数即可
    从10到200 遍历, 发现有四个值符合：24 175， 199，200
    */
    a = 0;
    for(int i = 1; i <= 200; i++)
    {
        a = a + i;
        if(a % 100 == 0)
        cout << i << ' ';
    }

    cout << endl << 2024041331404202 / 200 * 4 + 2 << endl;
    
    // 获取结束时间
    clock_t end = clock();

    // 计算时间差，单位为秒
    double duration = double(end - start)/ CLOCKS_PER_SEC * 1000; 

    cout << "程序运行时间为: " << duration << "ms" << endl;
    return 0;
}
