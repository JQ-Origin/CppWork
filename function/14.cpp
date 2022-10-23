#include<iostream>
using namespace std;
int sss(int,int);
int main()
{   
    int a,n,out;
    cin>>a>>n;
    for(int j=1;j<=n;j++)
    {   
        out+=sss(a,j);
    }
    cout << out;
    return 0;
}
int sss(int a,int n)
{   
    int o=0;
    for(int i=0;i<n;i++)
    {   
        o=o*10+a;
    }
    return o;
}