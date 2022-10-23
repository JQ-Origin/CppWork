#include <iostream>
using namespace std;

double x;

int main()
{   
    cin>>x;
    if(x<=10)
        cout<<30;
    else if(x>10&&x<=50)
        cout<<3*x;
    else    
        cout<<2.5*x;
    
    return 0;
    
}