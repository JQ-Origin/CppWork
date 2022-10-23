/*输入2 个正整数mini和maxi(0<=mini,maxi<=1000)，输出斐波那契数列
（Fibonacci sequence）的值介于mini 和maxi之间(不含边界)所有的数。
要求定义并调用函数fib(n)，它的功能是返回该数列的第n项（n>=0）。
说明：Fibonacci 序列为0 1 1 2 3 5 8 13 21 ......
Sample Input
5 21
Sample Output
8 13*/
#include <iostream>
using namespace std;
int mini,maxi,n=1;
int fib(int n);
int main()
{   
    cin>>mini>>maxi;
    while(true)
    {   
        n++;
        if(mini<fib(n)&&maxi>fib(n))
            cout<<fib(n)<<" ";
        else if(maxi<fib(n))
            break;
        else
            ;
    }

    return 0;
}
int fib(int n)
{   
    int i=0,j=1,k;
    n=n-2;
    while(n!=0)
    {   
        k=j;
        j=i+j;
        i=k;
        n--;
    }
    return j;
}