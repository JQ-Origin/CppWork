#include <iostream>
using namespace std;

double m,tax;

int main()
{   
    
    cin>>m;

    if(m<=1000)
        tax=0;
    else if(m<=3000)
        tax=0.03*m;
    else if(m<=5000) 
        tax=0.04*m;
    else
        tax=0.06*m;

    cout<<tax;
    return 0;      
}