#include<iostream>
using namespace std;
int a(int);
int main()
{
    int m,n;
    cin>>m>>n;
    for(int j=1;j<n;j++)
    {
        if(a(j)==j)
            cout<<j<<" ";
    }
    cout<<endl;
    for(int k=m;k<n;k++)            
    {
        for(int h=2;h<=k;h++)
        {   
            if((k%h==0)&&(h!=k))
                break;
            else if(k%h==0&&h==k)
                cout<<k<<" ";
        }
    }
    return 0;
}
int a(int num)
{   
    int o=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
            o+=i;
    }
    return o;
}