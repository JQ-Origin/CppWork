/*输入一组整数，其中第一个整数为个数n，后续为n个整数，输出其中素数的个数。
要求将判断一个整数是否为素数用函数实现。*/
#include <iostream>
using namespace std;
int sushu(int num);
int main ()
{
    int n,out=0,num,a=1; 
    cin>>n;
    for(;n!=0;n--)
    {   
        cin>>num;
        out+=sushu(num);
    }
    cout<<out;
    return 0;
}
int sushu(int num)
{   int k=1,a=1;
    while(a!=0)
    {   
        k++;
        a=num%k;
    }
    if(k==num)
        return 1;
    else
        return 0;
}