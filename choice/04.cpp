#include <iostream>
using namespace std;

int x;

int main()
{   
    
    cin>>x;
    if((x%4==0 && x%100 !=0)||(x%400==0))
        cout<<"yes";
    else
        cout<<"no";
    
    return 0;
}