#include<iostream>
using namespace std;
double s(int);
int main()
{   
    int i,o=0;
    cin >> i;
    while(i)
    {   
        o+=s(i);
        cin>>i;
    }
    cout<<o;
}
double s(int n)
{   
    double d;
    while(n)
    {   
        d=d*10+n%10;
		n/=10;
    }
    return d;
}