/*
输入n对整数，计算这n对整数最小公倍数之和。其中计算一对整数的最小公倍数用函数实现。
输入格式：第一个为对数n，后续为n对整数。

Input
Output
Sample Input
2 3 5 4 8
Sample Output
23*/
#include<iostream>
using namespace std;

#include <iostream>
using namespace std;
int min_B(int,int);
int main()
{
    int n,num1,num2,out=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>num1>>num2;
        out+=min_B(num1,num2);
    } 
    cout<<out;
}
int min_B(int a,int b)
{
    int j=1;
    while(true)
    {
        if(j%a==0&&j%b==0)
        {
            return j;
            break;
        }
        else
            j++;
    }
}