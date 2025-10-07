#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {3, 2, 4, 7};
    int target = 6;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i] + arr[j] == target) {
                cout <<i<<' '<<j<<endl;
                return 0;
            }
        }
    }

    cout << "No solution found" << endl;
    return 0;
}
