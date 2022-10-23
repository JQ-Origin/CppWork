#include <iostream>
using namespace std;

double high,weight,good_weight;

int main()
{   
    cin >> high >> weight;
    good_weight = high -110;

    if(weight > good_weight + 5)
        cout<<"fat";
    else if(weight < good_weight - 5)
        cout<<"thin";
    else
        cout<<"standard";

    return 0;
}