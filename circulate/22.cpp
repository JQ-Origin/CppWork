#include <iostream>
using namespace std;

int num,n,a=2,j;

int main()
{   
    cin>>n;
    for(int i=1;i<n;i++,a++)
        {for(int k=2;k<=a;k++)
            if(a%k==0&&k==a)
            {   cout<<a<<" ";
                j=j+1;
            }
            else if(a%k==0&&k!=a)
                break;
            else
                ;
        
        }
    
    cout<<endl<<j;
    return 0;
}