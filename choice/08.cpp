#include <iostream>
using namespace std;

int a1,a2,a3;

int main()
{   
    cin>>a1>>a2>>a3;
    if((a1+a2>a3)&&(a2+a3>a1)&&(a1+a3>a2))
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}