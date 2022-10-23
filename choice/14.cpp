#include <iostream>
using namespace std;

int q,w,e,r,i,j;

int main()
{   
    cin>>q>>w>>e>>r;
    i = min(q,w);
    j = min(e,r);
    cout << min(i,j);
    
    return 0;
}