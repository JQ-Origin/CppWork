/*
定义运算n^k表示n的k次幂，从键盘输入整数n和k，计算1^k+2^k+……+n^k，其中求n^k用函数实现。
Input
Output
Sample Input
3 5
Sample Output
276*/
#include<iostream>
using namespace std;
double mi(int,int);
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    for(int j=1;j<=n;j++)
        sum+=mi(j,k);
    cout<<sum;
    return 0;
}
double mi(int n,int k)
{   
    int out=1;
    for(int i=0;i<k;i++)
        out=out*n;
    return out;
}