#include <iostream>
using namespace std;

int n,m;

int main()
{   
    int n,m=0;
    while(n != 0)
    {   
        cin>>n;
        if(n>m)
            m= n;
        else
            ;
    }
    cout<<m;
    return 0;
}