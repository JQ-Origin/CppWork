#include<iostream>
using namespace std;
bool isodd(int);
int main()
{   
    int n,times=0;
    cin>>n;
    while(n)
    {   
        if(isodd(n))
        {   
            cout<<n<<" ";
            times+=1;
        }
        else
            ;
        cin>>n;
    }
    cout<<times;
}
bool isodd(int num)
{   
    return (num%2==0)?false:true;
}