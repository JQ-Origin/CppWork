#include <iostream>
#include <math.h>
using namespace std;

int i,j,max_num,k=1,out;

int main()
{   
    cin>>i>>j;
    max_num=max(i,j);
    for(;max_num!=0;max_num--,k++)
        if((i%k==0)&&(j%k==0))
            out=k;
        else
            ;
    cout<<out;
    return 0;

}