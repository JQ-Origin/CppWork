#include <iostream>
using namespace std;

int num;
int main()
{   
    cin >> num;
    if(num>100||num<0)
        cout << "illegal";
    else if(num>=90)
        cout << "A";
    else if(num>=60)
        cout << "B";
    else
        cout << "C";
    
    return 0;
}