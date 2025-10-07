#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n=5;
    int max=INT_MIN;
    int arr[5]={2,7,1,9,5};
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}