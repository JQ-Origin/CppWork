/*输入一组整数，计算这些整数的因数个数之和。其中第一个整数为个数n，后续为
n个整数。要求计算一个整数的因数个数用函数实现。如输入3 6 8 5，其中6的因数
个数为4,8的因数个数为4,5的因数个数为2，所以计算结果为10。*/
#include <iostream>
using namespace std;
int num,in_num,out;
int yinshugeshu(int);
int main()
{   
    cin>>num;
    while(num!=0)
    {   
        cin>>in_num;
        num--;
        out+=yinshugeshu(in_num);    
    }
    cout<<out;
    return 0;
}
int yinshugeshu(int in_num)
{   
    int n=0,a=0;
    while(n!=in_num)
    {   
        n++;
        if(in_num%n==0)
            a+=1;
        else
            ;
    }
    return a;
}