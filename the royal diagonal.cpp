#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {cin >> a[i][j] } ;
    }
    int d1 = 0, d2 = 0;
    for(int i=0;i<n;i++){
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }
    cout << d1 << " " << d2;
}