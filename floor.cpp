#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 6, 6, 8}, target = 0;
    int n = 6, st = 0, end = n - 1, ans = -1;
    while (st <= end) {
        int mid = (st +end) / 2;
        if (arr[mid] <= target) {
            ans = arr[mid];
            st = mid + 1;
        } else end = mid - 1;
    }
    cout << ans;
}