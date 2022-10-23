/*编写一个递归函数fac，该函数计算n的阶乘，如3的阶乘为6，0的阶乘为1。main函数中输入n个整数，计算这些整数的阶乘平均值。
例如输入：2 1 2，则计算1和2的阶乘的平均值，输出1.5。注意：不用递归解决问题，即使提交通过，也不符合题目要求，考试时不得分。

Input
第一个整数位个数n，后续为n个整数。

Output
Sample Input
3 3 4 5
Sample Output
50
*/
#include<iostream>
using namespace std;
int num,n;
double out;
int fac(int);
int main()
{   
    cin>>n;
    for(int i=0;i<n;i++)
        {   
            cin>>num;
            out+=fac(num);
        }
    cout<<out/n;
    return 0;
}
int fac(int num)
{   
    if(num!=1)
        return num*fac(num-1);
}