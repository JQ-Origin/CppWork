#include <iostream>
using namespace std;

double n,i,u,k;

int main()
{   
    cin>>n;
    for(u=n;u!=0;u--)
    {   
        cin>>i;
        k=k+i;
    }
    cout<<k/n;
    return 0;
}