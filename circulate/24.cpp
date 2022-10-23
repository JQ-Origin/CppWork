#include <iostream>
using namespace std;

double num=1,p,i;

int main()
{
    while (num!=0)
    {   
        cin>>num;
        p+=num;
        if(num!=0)
        i++;
    }
    cout<<p/i;
    return 0;  
}