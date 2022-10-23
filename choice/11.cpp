#include <iostream>
using namespace std;

int x;
int main()
{   
    cin>>x;
    
    switch(x)
    {   
        case 1:
            cout << 3.1;
            break;
        case 2:
            cout <<2.5;
        case 3:
            cout <<4.1;
            break;
        case 4:
            cout <<10.2;
            break;
        default :
            cout <<0;
         
    }
    
    return 0;
}