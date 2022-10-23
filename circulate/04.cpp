#include <iostream>
using namespace std;

int n,d=0;

int main()
{   
    cin>>n;
    while(n>0)
    {   
        n=n-(n/2+2);
        d++;
    }
    cout<<d;

    return 0;
}