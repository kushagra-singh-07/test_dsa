#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[5]={1,3,5,7,9};
    int key=7,ans=-1;

    int st=0,end=n-1;
    while (st<end)
    {
        int mid=st+((end-st)/2);

        if(arr[mid]>=key)
        {
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    if(ans != -1 && arr[ans] == key)
    cout << "Target index:" << ans << endl;
    else
    cout << "Target not found" << endl;
    return 0;
}