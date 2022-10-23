#include <iostream>
using namespace std;

int num,ma,k=1;

int main()
{   

    for(;k!=0;)
    {   
        cin>>k;
        if(ma<k)
            ma=k;
        else
            ;
        if(k!=0)
            num++;
        else
            ;
    } 
    cout<<num<<" "<<ma; 
    return 0; 
}