#include <iostream>
using namespace std;

int i=0,j=1,k,num;

int main()
{   
    cin>>num;
    num=num-1;
    while(num!=0)
    {   
        k=j;
        j=i+j;
        i=k;
        num--;
    }
    if(j%3==0)
        cout<<"yes";
    else
        cout<<"no";
    
    return 0;

}