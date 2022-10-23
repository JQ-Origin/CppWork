/*输入两个正整数min、max，计算[min,max]之间所有的素数之和。
将判断一个整数是否为素数用函数实现。

Input
Output
Sample Input
2 10
Sample Output
17*/
#include<iostream>
using namespace std;
int su(int);
int main()
{
    int min,max,out=0;
    cin>>min>>max;
    for(int i=min;i<max;i++)  
        out+=su(i);
    cout<<out;
    return 0;
}
int su(int i)
{   
    for(int j=2;j<=i;j++)
    {   
        if((i%j==0)&&(i!=j))
            return 0;
        else if(i%j!=0);
        else
            return i;
    }
}