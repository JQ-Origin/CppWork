/*编程求解问题。若一头小母牛，从出生起第四个年头开始每年生一头母牛，按此规律，第n年时有多少头母牛。（用递归函数方法求解）

Input
Output
Sample Input
7
Sample Output
6*/
#include <iostream>
using namespace std;
int cowNum(int year);
int main()
{
	int year;
	cin >> year;

	cout << cowNum(year);
	return 0;
}

int cowNum(int N)
{
	if (N == 1 || N == 2 || N == 3)
	{
		return 1;
	}
	else
	{
		return cowNum(N - 1) + cowNum(N - 3);
	}
}
