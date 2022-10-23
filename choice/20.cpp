#include <iostream>
using namespace std;

double x;

int main()
{   
    cin>>x;
    
    if(x<=50)
        cout<<0.15*x;
    else
        cout<<0.25*(x-50)+0.15*50;
    
    return 0;
}