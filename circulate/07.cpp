#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int n=100;
    while(n!=999)
    {   
        if(n==pow(n/100,3)+pow(n/10%10,3)+pow(n%10,3))
            cout<<pow(n/100,3)+pow(n/10%10,3)+pow(n%10,3)<<" ";
        else
            ;
        n++;
    }
    return 0;
}