#include <iostream>
using namespace std;

int num,n=1,a=1;

int main()
{   
    cin>>num;

    while(a!=0)
    {   
        n++;
        a=num%n;
        
    }
    if(num==n)
        cout<<1;
    else
        cout<<0;

    return 0;
}