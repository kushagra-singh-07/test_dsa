#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[5]={1,2,2,2,3};

    int key=2;
    int st=0,end=n-1;
    int ans=-1;

    while(st<=end)
    {
        int mid=st+((end-st)/2);

        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;

        }
       else if(arr[mid]<key)
        {
            st=mid+1;
        }
        else {
            end=mid-1;
            
        }
    }
    if(ans!=-1)
    {
        cout<<ans<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}