#include <iostream>
using namespace std;

int y,m,d,allday;

int main()
{   
    cin >>y>>m>>d;

    switch(m){
        case 1:
            allday =0;
            break;
        case 2:
            allday =31;
            break;
        case 3:
            allday =59;
            break;
        case 4:
            allday =90;
            break;
        case 5:
            allday =120;
            break;
        case 6:
            allday =151;
            break;
        case 7:
            allday =181;
            break;
        case 8:
            allday =212;
            break;
        case 9:
            allday =243;
            break;
        case 10:
            allday =273;
            break;
        case 11:
            allday =304;
            break;
        case 12:
            allday =334;
            break;
        }
        if((y%4==0 && y%100 !=0)||(y%400==0))
            cout << allday + d + 1;
        else
            cout << allday +d;

    return 0;   
}