#include <iostream>
#include <string>
#include <vector>
#include <chrono>  // 引入 chrono 库来测量时间
#include <algorithm>

using namespace std;

// class UF
// {
//     // 连通分量个数
//     private:
//      int count;
//     // 存储一棵树
//     int *parent;
//     // 记录树的“重量”
//     int *size;

//     public:
//         UF(int n) {
//         this->count = n;
//         parent = new int[n];
//         size = new int[n];
//         for (int i = 0; i < n; i++) {
//             parent[i] = i;
//             size[i] = 1;
//         }
//     }
//     int find(int x) {
//         while (parent[x] != x) {
//             // 进行路径压缩
//             parent[x] = parent[parent[x]];
//             x = parent[x];
//         }
//         return x;
//     }

//         void union_t(int p, int q) {
//         int rootP = find(p);
//         int rootQ = find(q);
//         if (rootP == rootQ)
//             return;

//         // 小树接到大树下面，较平衡
//         if (size[rootP] > size[rootQ]) {
//             parent[rootQ] = rootP;
//             size[rootP] += size[rootQ];
//         } else {
//             parent[rootP] = rootQ;
//             size[rootQ] += size[rootP];
//         }
//         count--;
//     }

//         bool connected(int p, int q) {
//         int rootP = find(p);
//         int rootQ = find(q);
//         return rootP == rootQ;
//     }

//         int count() {
//         return count;
//     }
// };

// int parent[5]={1,4,0,2,4};
// int find(int x) {
//     while (parent[x] != x) {
//         // 进行路径压缩
//         parent[x] = parent[parent[x]];
//         x = parent[x];
//     }
//     return x;
// }

int main() {
    // 记录开始时间
    chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();

    // 示例循环
    // for (int i = 0; i < 5; i++) {
    //     int a=find(i);
    //     for (int i = 0; i < 5; i++)
    //      cout << parent[i] << " ";
    //     cout<<endl;
    // }

    int n,m;
    cin>>n>>m;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> r(m+1,0);
    vector<int> l(m+1,0);

    for(int i=0;i<n;i++){
        if(a[i]>0 && abs(a[i])<=m){
            r[a[i]]++;
        }
        else if (a[i]<0 && abs(a[i])<=m){
            l[abs(a[i])]++;
        }
        
    }

    for(int i=1;i<=m;i++){
        r[i]+=r[i-1];
        l[i]+=l[i-1];
    }

    int ans=0;

    for(int i=1;i<=m/2;i++){
        ans=max(ans,r[i]+l[m-i*2]);
        ans=max(ans,l[i]+r[m-i*2]);
    }

    ans=max(ans,r[m]);
    ans=max(ans,l[m]);

    if(find(a.begin(),a.end(),0)!=a.end()){
        ans++;
    }

    cout<<ans;

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
/*
4 4
aabb
abba
acca
abcd

4 4
abcd
abba
acca
aaab

*/
