#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        float a;
        cin>>a;
        int cnt = 0;
        while(a > 1.0) {
            a /= 2.0;
            cnt++;
        }
        printf("%d dias\n", cnt);
    }
}
