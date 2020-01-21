#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--) {
        int a, b, c, d, e, f;
        cin>>a>>b>>c>>d>>e>>f;
        double l1, l2, l3;

        l1 = sqrt((a - c)*(a - c) + (b - d)*(b - d));
        l2 = sqrt((a - e)*(a - e) + (b - f)*(b - f));
        l3 = sqrt((c - e)*(c - e) + (d - f)*(d - f));

        double p = (l1+l2+l3)/2.0;

        printf("%.3f\n", sqrt(p*(p - l1)*(p-l2)*(p-l3)));
    }
}


