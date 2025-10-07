#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n=4;
    int arr[4]={1,2,3,4};
    int st=0,end=n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
        
    
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}