#include <iostream>
using namespace std;

int num,i,out;

int main()
{   
    cin>>num;
    i=num;
    while(i!=0)
    {   
        if(num%i==0)
            out++;
        else
            ;
        i--;
    }
    cout<<out;
    return 0;
}