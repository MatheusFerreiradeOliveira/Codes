#include <bits/stdc++.h>
using namespace std;
vector<int> lul(10, 3);
//sort(v.begin(), v.end());
set<int> s;//Só aceita cada num uma vez;
multiset<int> se;//aceita varios n;
map<string, int> mapa;
pair<int, double> P;
//P.first e P.second;
//if(P1 < P2) compara primeiro os first, dps os second
queue<int> q;
//q.push(add no final), q.front(mostra o começo), q.pop(tira do começo) e q.empty(retorna true ou false se tiver vazia)
stack<int> st;
//s.push(add topo), s.pop(retira topo), s.top(retorna o topo) e s.empty(true ou false se tiver vazia);
struct pessoa{
    string nome;
    void setnome(string n){
        nome = n;
    }
};
int main(){
    pessoa p;
    p.setnome("Matheus");
    s.insert(3);
    s.insert(4);
    if(s.count(3)){
        s.erase(3);
    }
    mapa["matheus"] = 2;
    cout<<mapa["matheus"]<<endl;
    if(mapa["pedro"]){
        //se n existir cria uma posicao com valor 0;
    }
}
