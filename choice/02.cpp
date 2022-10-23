#include <iostream>
using namespace std;

int x;

int main()
{   
    cin>>x;

    if(x>100)
        cout<<3.95+0.01*(x-100);
    else if(x>60)
        cout<<3.35+0.015*(x-60);
    else if(x>40)
        cout<<2.75+0.03*(x-40);
    else if(x>20)
        cout<<1.75+0.05*(x-20);
    else if(x>10)
        cout<<1+0.075*(x-10);
    else
        cout<<0.1*x;

    return 0;
}
