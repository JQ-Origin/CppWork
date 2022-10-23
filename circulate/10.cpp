#include <iostream>
using namespace std;

int x,out;

int main()
{   
    while(x>=0)
    {   
        cin>>x;
        if(x>0)
        out=out+x;
    }
    cout << out;
    return 0;
}