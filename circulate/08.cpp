#include <iostream>
using namespace std;

int n,a,sum;

int main()
{   
    cin>>n;
    while(n>0)
    {   
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout<<sum;
}
