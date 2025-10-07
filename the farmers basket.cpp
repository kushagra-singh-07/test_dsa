#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30}, key = 25;
    int n = 3;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}