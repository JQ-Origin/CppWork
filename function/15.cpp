#include<iostream>
using namespace std;
int f(int);
int main()
{   
    int m,n;
    cin>>m>>n;
    cout<<f(m)+f(n);
    return 0;
}
int f(int n)
{   
    int o=0;
    for(int i=1;i<=n;i++)
    {   
        o+=i;
    }
    return o;
}