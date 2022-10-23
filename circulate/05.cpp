#include <iostream>
using namespace std;

int repeat=1,x;

int main()
{   cin>>repeat;
    while(repeat!=0)
    {   
        cin>>x;
        if(x<60)
            cout<<"Fail\n";
        else
            cout<<"Pass\n";
        repeat--;
    }
    return 0;
}