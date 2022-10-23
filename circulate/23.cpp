#include <iostream>
using namespace std;

int main()
{
    int i,j,s,n;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        s=1;
        for(j=2;j<=i/2;j++)
            if(i%j==0)s+=j;
                if(s==i)
                    cout<<i<<" ";
    }
    return 0;
}