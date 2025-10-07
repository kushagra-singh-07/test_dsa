#include <iostream>
using namespace std;

void printnum(int n)
{
    if(n==0)
    {
       return;
    } 
    printnum(n-1);
    cout<<n<<" ";
}
int main(){
    printnum(5);
    cout<<endl;
    return 0;
}