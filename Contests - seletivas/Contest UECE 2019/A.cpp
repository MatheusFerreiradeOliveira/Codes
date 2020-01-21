#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2, xx1, yy1, xx2, yy2;
    cin>>x1>>y1>>x2>>y2>>xx1>>yy1>>xx2>>yy2;

    int a1 = y2 - y1;
    int b1 = x1 - x2;
    int c1 = a1*(x1) + b1*(y1);

    // Line CD represented as a2x + b2y = c2
    //64 0 64 256 128 0 192 256
    int a2 = yy2 - yy1;
    int b2 = xx1 - xx2;
    int c2 = a2*(xx1)+ b2*(yy1);

    int determinant = a1*b2 - a2*b1;

    if (determinant != 0)
    {
        cout<<"YES"<<endl;
        // The lines are parallel. This is simplified
        // by returning a pair of FLT_MAX
        //return make_pair(FLT_MAX, FLT_MAX);
    }
    else
    {
        cout<<"NO"<<endl;
        //double x = (b2*c1 - b1*c2)/determinant;
        //double y = (a1*c2 - a2*c1)/determinant;
        //return make_pair(x, y);
    }
}
