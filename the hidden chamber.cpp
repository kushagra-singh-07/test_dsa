#include <iostream>
using namespace std;

int sumArray(int arr[], int n){
    if(n==0) return 0;
    return arr[n-1] + sumArray(arr, n-1);
}

int main(){
    int n=4;
   
    int arr[4]={1,2,3,4};
    cout << sumArray(arr, n);
}