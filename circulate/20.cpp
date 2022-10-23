#include <iostream>
#include <math.h>
using namespace std;

int repeat,n;
double x;

int main()
{   
    cin>>repeat;
    for(;repeat!=0;repeat--)
    {   
        cin>>x>>n;
        cout<<pow(x,n)<<" ";
    }
    return 0;
}
