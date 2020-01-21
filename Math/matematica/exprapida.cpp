#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fast_exp(ll b, ll n)
{
  ll res = 1;
  ll x = b;

  while (n > 0) {
    if (n & 0x01) {
      n--;
      res *= x;
    } else {
      n >>= 1;
      x *= x;
    }
  }

  return res;
}

int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        ll a;
        cin>>a;
        cout<<(fast_exp(2, a-5)/3)/125<<" kg\n";
    }
}
