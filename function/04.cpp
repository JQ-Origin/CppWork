/*从键盘输入n对整数，求这些对整数间所有奇数之和的最大值。要求计算一对
整数min、max（含min和max）之间所有奇数的和用函数实现，若min>max，函数返回值
为0。输入格式：第一个整数为n，后续为n对整数。例如：输入
数据为 3 10 20 17 31 40 45，表示输入3对整数，因为10~20间的奇数
依次为11,13,15,17,19，奇数之和为75,17~31间的奇数依次为17,19,21,23,
25,27,29,31，奇数之和为192，而40~45间的奇数依次为41,43,45，奇数之和
为129，因此最大值为192，输出结果为192。*/
#include <iostream>
using namespace std;
int mini,maxi,n,max_num,num;
int sb(int,int);
int main()
{   
    cin>>n;
    while(n!=0)
    {   
        cin>>mini>>maxi;
        num=sb(mini,maxi);
        if(max_num<num)
            max_num=num;
        n--;
    }
    cout<<max_num;
    return 0;
}
int sb(int,int)
{   
    int j=0;
    if(mini>maxi)
        return 0;
    while(mini!=maxi+1)
    {   
        if((mini%2)!=0)
            j+=mini;
        mini++;
    }
    return j;
}