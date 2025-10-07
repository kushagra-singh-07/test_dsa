#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[5]={0,1,2,4,5};
    int sum=0,missing_num;
   
    for(int i=0;i<n;i++)
    {
         
         sum+=arr[i];   
    }
    int total_sum=(n*(n+1))/2;
    missing_num = total_sum -sum;

    cout<< missing_num <<endl;
    return 0;
}