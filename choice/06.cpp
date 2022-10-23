#include <iostream>
using namespace std;

int h,wage;
int main()
{   
    cin>>h;
    if(h<=4)
        wage = 50;
    else if(h<=8)
        wage =50+(h-4)*20;
    else
        wage = 50+80+(h-8)*30;
    cout <<wage;

    return 0;
}