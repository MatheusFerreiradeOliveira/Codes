#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    while(n--) {
        int a, b, c, d;

        cin>>a>>b>>c>>d;

        cout<<a/b - d/b + (c-1)/b<<endl;
    }

}
