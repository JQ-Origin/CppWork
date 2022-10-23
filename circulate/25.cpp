#include <iostream>
#include <math.h>
using namespace std;

int x,a=1,n=1,out;

int main()
{   
    cin>>x;
    while (x!=0)
    {
        while(a!=0)
        {   
            n++;
            a=x%n;
        
        }
        if(x==n)
            out=max(out,x);
        n=1;
        a=1;
        cin>>x;
    }
    if(out==0)
    cout<<"no";
    else
    cout<<out;
    return 0;
}