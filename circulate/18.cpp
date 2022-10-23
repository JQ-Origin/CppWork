#include <iostream>
using namespace std;

int n,a,sum;

int main()
{   
    cin>>n;
    while(true)
    {
        while(n>0)
        {   
            a=n%10;
            sum=sum+a;
            n=n/10;
        }
        if(sum/10==0)
            break;
        else
            n=sum;
            sum=0;
    }
        cout<<sum;
        return 0;
}
