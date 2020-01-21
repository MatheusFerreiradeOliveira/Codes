#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll busca(ll n,ll a,ll b, ll limit) {

    ll ini = 0;
    ll fim = n;

    ll ans = -1;

    while(ini <= fim) {
        int meio = (ini+fim)/2;

        if(a*meio + b*(n - meio) < limit) {
            ans = meio;
            ini = meio + 1;
        }
        else {
            fim = meio - 1;
        }
    }

    return ans;

}

int main() {

    int q;

    cin>>q;

    while(q--) {
        ll k, n, a, b;
        cin>>k>>n>>a>>b;

        cout<<busca(n, a, b, k)<<endl;

    }
}


