#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll, ll> ponto;

/* Apelidos para acessarmos a estrutura */
#define x first
#define y second

/* Calculando a determinante dos tres pontos */
ll orientacao(ponto p1, ponto p2, ponto p3) {

    ll val = (p2.x - p1.x) * (p3.y - p2.y) -
              (p2.y - p1.y) * (p3.x - p2.x);

    return val;
}

int main() {

    ponto p1, p2, p3;

    cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y;

    ll ans = orientacao(p1, p2, p3);

    if(ans > 0) cout<<"LEFT\n";
    else if(ans < 0) cout<<"RIGHT\n";
    else cout<<"TOWARDS\n";

}
