#include <iostream>
#include <cmath>
using namespace std;

int x,y,z,n;
int main()
{   
    cin >>x>>y>>z;
    if(x>y)
        n = x;
    else
        n =y;
    if(z>n)
        cout<<z;
    else
        cout<<n;

    return 0;
}