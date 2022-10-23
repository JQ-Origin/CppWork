#include<iostream>
using namespace std;
int num_root(int);
int main()
{
    int i,a;
    cin>>i;
    for(int j=0;j<i;j++)
    {   
        cin>>a;
        cout<<num_root(a)<<" ";
    }
    return 0;
}
int num_root(int n)
{   
    active:
    int a=0;
    while(n)
    {   
        a+=n%10;
        n=n/10;
    }
    if(a/10!=0)
    {
        n=a;
        goto active;
    }
    else    
        return a;
}