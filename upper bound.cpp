#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 6, 6, 8}, target = 7;
    int n = 6, low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        } else 
        low = mid + 1;
    }
    cout << ans;
}