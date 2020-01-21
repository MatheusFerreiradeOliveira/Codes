#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) {
    return (b==0 ? a : mdc(b, a%b));
}

int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        int lul, lol;
        cin>>lul>>lol;
        printf("%d\n", mdc(lul, lol));
    }
}
