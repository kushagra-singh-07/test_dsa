#include <iostream>
using namespace std;

int main() {
    int n=3,m=3;
    int arr[n][m]={{1,2,3},{4,5,6},{7,8,9}};
    int target=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==target)
            {
                cout<<"yes";
            }
           
        }
    }
    return 0;
}