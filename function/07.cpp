/*
输入n对整数，计算这n对整数最大公约数之和。其中计算一对整数的最大公约数用函数实现。
输入格式：第一个为对数n，后续为n对整数。

Input
Output
Sample Input
3 14 18 20 30 25 35
Sample Output
17*/
#include<iostream>
using namespace std;
int num1,num2,sum_biggest_num;
int fac(int,int);
int main()
{   
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {   
        cin>>num1>>num2;
        sum_biggest_num+=fac(num1,num2);
    }
    cout<<sum_biggest_num;
    return 0;
}
int fac(int num1,int num2)
{   
    int biggest_num;
    for(int i=1;i<((num1>num2)?num2:num1);i++)
        {
            if((num1%i==0)&&(num2%i==0))
                biggest_num=i;
        }
    return biggest_num;
}