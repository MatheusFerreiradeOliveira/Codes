#include <bits/stdc++.h.>

using namespace std;
typedef long long ll;
int main(){
    ll n, m;
    cin>>n>>m;
    ll runner;
    cin>>runner;
    ll soma , maior, menor;
    soma = maior = menor = runner;
    for(int i = 1; i < n; i++){
        cin>>runner;
        soma+=runner;
        maior = max(maior, soma);
        menor = min(menor, soma);
    }
    ll ans = m + 1;
    if(maior > 0)ans = m - maior + 1;
    if(menor < 0) ans += menor;



    if(ans < 0) cout<<0<<endl;
    else
        cout<<ans<<endl;

}



