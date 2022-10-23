#include <iostream>
using namespace std;

int a1,a2,a3,a4,a5,num;

int main()
{   
    cin >>num;
    a1 = num/10000;
    a2 = num/1000%10;
    a3 = num/100%10;
    a4 = num/10%10;
    a5 = num%10;

   if((a1==a5)&&(a2==a4))
        cout << "YES";
    else
        cout<< "NO";
    
    return 0; 
}
