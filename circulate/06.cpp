#include <iostream>
using namespace std;

double n,out=0,a=0;

int main()
{
    cin>>n;
    while(a<n)
    {   
        a++;
        out = out + 1/a;
    }
    cout << out;
    return 0;
    
}