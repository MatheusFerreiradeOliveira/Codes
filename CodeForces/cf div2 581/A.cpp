#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, l, r;
    cin>>n>>l>>r;

    long long int minsum = 1, maxsum = 1;

    long long int last = 1;

    for(int i = 1; i < l; i++) {
        last *= 2;
        minsum += last;
        maxsum += last;
    }
    minsum += n - l;

    for(int i = l; i < r; i++) {
        last *= 2;
        maxsum += last;
    }

    maxsum += (last * (n - r));

    cout<<minsum<<" "<<maxsum<<"\n";
}
