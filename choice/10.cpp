#include <iostream>
using namespace std;
int x;
int main()
{   
    cin >> x;
    if(x<0)
        cout << -1;
    else if(x==0)
        cout << 0;
    else
        cout << 1;
    
    return 0;
}