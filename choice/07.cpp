#include <iostream>
using namespace std;

int y,ma;

int main()
{   
    cin >> y>>ma;

    if(ma ==2)
    {
        if((y%4==0 && y%100 !=0)||(y%400==0))
            cout << 29;
        else 
            cout << 28;
    }
    else if((ma==1)||(ma==3)||(ma==5)||(ma==7)||(ma==8)||(ma==10)||(ma==12))
        cout << 31;
    else 
        cout << 30;

    return 0;

}