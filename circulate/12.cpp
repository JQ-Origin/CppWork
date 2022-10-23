#include <iostream>
using namespace std;
double a=1,tax,i;
int main()
{   
    cin>>a;
    while(a!=0)
    {   
        cin >>i;
         if(i<=1000)
            tax=0;
        else if(i<=3000)
            tax=0.03*i;
        else if(i<=5000) 
            tax=0.04*i;
        else
            tax=0.06*i;
        cout<<tax<<" ";
        a--;
    }
}