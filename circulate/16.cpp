#include <iostream>
#include <math.h>
using namespace std;

int x,i,a1,a2;

int main()
{   
    cin >>x;
    for(;x!=0;x--)
    {   
        cin >>i;
        if(i%2==1)   
            a1=a1+pow(i,2);
        else
            a2=a2+pow(i,3);
    }
    cout<<a1<<" "<<a2;
}