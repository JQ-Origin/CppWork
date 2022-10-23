#include <iostream>
#include <cmath>
using namespace std;

double a,b,c,derta;

int main()
{   
    cin >>a>>b>>c;

    derta = b*b - 4*a*c;

    if(derta>0)
        cout<<(-b-sqrt(derta))/(2*a)<<" "<<(-b+sqrt(derta))/(2*a);
    else if(derta==0)
        cout<<(-b)/(2*a);
    else
        cout<<"无解";

    return 0;
}