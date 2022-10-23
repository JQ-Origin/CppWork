#include<iostream>
using namespace std;
double fib(int);
int main()
{
    double in,out=0,i=2;
    cin>>in;
    while(true)
    {   
        
        
        if(1/fib(i)<in)
            break;
        else
            ;
        out+=1/fib(i);
        i++;
    }
    cout<<out;
}
double fib(int n)
{   
    double i=0,j=1,k;
    n=n-2;
    while(n!=0)
    {   
        k=j;
        j=i+j;
        i=k;
        n--;
    }
    return j;
}