#include<iostream>
using namespace std;
int sum_num(int n);
int main()
{   
    int i,out;
    cin >>i;
    while(i)
    {   
        out=sum_num(i);
        if(out%2!=0)
        cout<<i<<" ";
        cin>>i;
    }
    return 0;
}
int sum_num(int n)
{   
    int d=0;
    while(n)
    {   
        d+=n%10;
        n=n/10;
    }
    return d;
}
