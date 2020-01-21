#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    while(cin>>a>>b>>c>>d) {
        if(a==0 && b==0 && c==0 && d==0) break;
        int div = b/d;
        if(b%d != 0) div++;
        float C = (float)c;
        printf("%.1f\n", 100 * C/6 * div);
    }
}
