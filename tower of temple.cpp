#include <iostream>
using namespace std;
void toh(int n,char source,char temp,char dest)
{
    if(n==1)
    {
        cout<<" move disk "<<n<<" from "<<source<<" to "<<dest << endl;
        return;
    }
    toh(n-1,source,dest,temp);
    cout << "move disk " << n << " from " << source << " to " << dest << endl;

    toh(n-1,temp,dest,source); 
    
}
int main()
{
    int n=3;
    toh(n,'S','T','D');
    return 0;
}