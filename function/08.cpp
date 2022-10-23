/*设计一个递归函数，求x的n次幂，其中n为非负整数。在main函数中输入x和一个整数n，输出x的n次幂。
Input
Output
Sample Input
3.5 4
Sample Output
150.062*/
#include<iostream>
using namespace std;
double fac(double,double);
int main()
{   
    double x,n;
    cin>>x>>n;
    cout<<fac(x,n);
}
double fac(double x,double n)
{   
    if(n==1)
        return x;
    else
        return x*fac(x,n-1);
}