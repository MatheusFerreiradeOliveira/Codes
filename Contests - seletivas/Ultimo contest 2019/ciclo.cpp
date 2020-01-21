#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 1e5+10;
int n;
vector<int> adj[MAX];
int visit[MAX];
int cont;
int raiz;
bool achouraiz = false;
vector<ll> saida;

ll mdc(ll a, ll b){
  return (b == 0 ? a : mdc(b, a%b)); //b == 0 ? Caso sim, retorne a, caso não, retorne mdc(b, a%b)
}

void dfs(int v){
    cont++;
    visit[v] = 1;
    for(int x : adj[v]) {
        if(x == raiz) achouraiz = true;
        if(visit[x]) continue;
        dfs(x);
    }
}
int main() {

    memset(visit, 0, sizeof visit);
    bool deucerto = true;

    cin>>n;

    for(int i = 1; i <= n; ++i) {
        int a;
        cin>>a;
        adj[i].push_back(a);
    }

    for(int i = 1; i <= n; ++i) {
        if(!visit[i]) {
            achouraiz = false;
            raiz = i;
            cont = 0;
            dfs(i);
            if(!achouraiz){
                deucerto = false;
                break;
            }
            saida.push_back(cont);
        }
    }

    if(!deucerto) {
        cout<<-1<<"\n";
        return 0;
    }

    ll lul = saida[0];

    for(int i = 1; i < saida.size(); ++i) {
        lul = (lul*saida[i])/mdc(lul, saida[i]);
    }
    cout<<lul<<"\n";
    return 0;
}
