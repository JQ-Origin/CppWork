#include <iostream>
using namespace std;

double n,out;

int main()
{   
    cin>>n;
    while(n!=0)
    {   
        out=out+1/(3*n-2);
        n--;
    }
    cout<<out;
    return 0;
}