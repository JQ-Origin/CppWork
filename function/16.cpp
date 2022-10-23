#include<iostream>
using namespace std;
double sgn(int);
int main()
{   
    double n,x,a=0,sum_n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {   
        cin>>x;
        if(sgn(x)==1)
        {   
            a++;
            sum_n+=x;
        }
    }
    cout<<sum_n/a;

}
double sgn(int x)
{   
    if(x<0)
        return -1;
    else if(x==0)
        return 0;
    else
        return 1;
}