#include <iostream>
#include <math.h>
using namespace std;
int a=1000;
int main()
{   
    while(a!=9999)
    {   
        if(a==pow((a/100+a%100),2))
            cout<<a<<" ";
        else
            ;
        a++;    
    }
    return 0;
}