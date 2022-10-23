#include <iostream>
using namespace std;

int x=1,out;

int main()
{   
    
    while(x!=0)
    {   
        cin>>x;
        if(x%2==0)
            ;
        else
            out=out+x;
    }
    cout<<out;
    
    return 0;
}