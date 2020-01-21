#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9+7;

ll fast_expo(ll base, ll e) {
    if(e==0) return 1;
    ll ans = fast_expo(base, e/2);
    ans = (ans * ans) % MOD;
    if(e%2==1) ans *= base;
    return ans % MOD;
}



int main() {
    cout<<fast_expo(2, 20)<<endl;
}
