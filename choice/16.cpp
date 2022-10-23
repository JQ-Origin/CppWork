#include <iostream>
using namespace std;

char x;
int y;

int main()
{   
    cin>>x;
    y = x;
    
    if((x>=65)&&(x<=90))
    {   
        x += 32;
        cout << (char)x;
    }
    else if(x<=9)
        cout << x;
    else
        cout <<(char)x;
    
    return 0;
}