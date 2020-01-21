#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

ll mdc(ll a, ll b){
  return (b == 0 ? a : mdc(b, a%b)); //b == 0 ? Caso sim, retorne a, caso não, retorne mdc(b, a%b)
}

int main () {

    int n;

    cin>>n;

    for(int i = 0; i < n; ++i) {
        ll lul, lol;
        cin>>lul>>lol;
        ll mmc = lul*lol / (mdc(max(lul, lol), min(lul, lol)));
        cout<<(mmc/lul)%(1000000000 + 7)<<" "<<(mmc/lol)%(1000000000 + 7)<<"\n";
    }

}
