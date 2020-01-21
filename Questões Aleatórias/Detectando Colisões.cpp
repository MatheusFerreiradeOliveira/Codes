#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x0, x1, y0, y1, xx0,xx1,yy0, yy1;
    cin>>x0>>y0>>x1>>y1>>xx0>>yy0>>xx1>>yy1;
    if((xx0 <= x1 and xx0 >= x0) || (yy0 <= y1 and yy0))
        cout<<1<<endl;
    else
        cout<<0<<endl;
}
