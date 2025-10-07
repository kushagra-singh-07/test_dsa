#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{10,20,30}, {40,50,60}, {70,80,90}};
    int target = 60, n = 3, m = 3;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == target) {
                cout << "(" << i << "," << j << ")";
                return 0;
            }
        }
    }
    cout << "(-1,-1)";
}