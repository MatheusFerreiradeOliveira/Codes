#include <bits/stdc++.h>
using namespace std;

int main() {

    int x1, y1, x2, y2, xx1, yy1, xx2, yy2;
    cin>>x1>>y1>>x2>>y2>>xx1>>yy1>>xx2>>yy2;

    int m1 = 0.0;

    m1 = (y2 - y1) / (x2 - x1);

    int m2 = 1.0;

    m2 = (yy2 - yy1) / (xx2 - xx1);

    if(m1 != m2 || (x1 == xx1 && y1==yy1 && x2==xx2 && y2==yy2)) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
