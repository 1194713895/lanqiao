#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct chd{
    int r;
    int c;
};

int main()
{
    int n,m,T;
    cin>>n>>m>>T;

    vector<vector<chd>> a(n,vector<chd>(m));
    vector<chd> b(T);
    vector<chd> c(T);

    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        for(int j=0;j<m;j++){
            a[i][j].r=tmp;
        }
    }
    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        for(int j=0;j<n;j++){
            a[j][i].c=tmp;
        }
    }
    for(int i=0;i<T;i++){
        cin>>b[i].r;
        cin>>b[i].c;
        cin>>c[i].r;
        cin>>c[i].c;
    }

    return 0;
}
