#include <bits/stdc++.h>
#define MAX 110
using namespace std;

vector<int>adj[MAX];
stack<int> runner;
int n;
int grau[MAX];
int pai[MAX];
int visitados[MAX];
int entrou[MAX];

int pegaUm(){
    int saida = -1;

    for(int j = 1; j <= n; j++) {
        if(grau[j] > 1){
            saida = j;
        }
    }

    return saida;

}

void dfs(int v) {
    visitados[v] = 1;

    if(grau[v] <= 1 && entrou[v] == 0){

        runner.push(v);
        entrou[v] = 1;
        grau[pai[v]]--;
        grau[v]--;

        //cout<<"Adicionou o "<<v<<" e decrementou  "<<pai[v]<<endl;

    }

    for(int x : adj[v]) {
        if(visitados[x]) continue;

        pai[x] = v;
        dfs(x);

    }
}

int main() {

    int teste = 0;

    while(cin>>n && n!= 0) {

        teste++;

        if(n == 1) runner.push(1);

        memset(grau, 0, sizeof(grau));
        memset(visitados, 0, sizeof(visitados));
        memset(entrou, 0, sizeof(entrou));

        int a, b;

        for(int i = 0; i < n-1; i++) {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
            grau[a]++;
            grau[b]++;
        }

        int first = pegaUm();

        if(first == -1){
            runner.push(1);
            first = 1;
        }

        for(int i = 1; i <= n; i++){

            dfs(first);

            if(grau[first] <= 1 ) {
                int aux = pegaUm();

                if(aux != -1)
                    first = aux;
            }

            memset(visitados, 0, sizeof(visitados));

        }

        cout<<"Teste "<<teste<<endl;
        cout<<runner.top()<<endl;
        cout<<endl;

        while(!runner.empty())
            runner.pop();

        for(int i = 1; i <= n; i++) adj[i].clear();
    }
}
 /*
int visitados[MAX];
vector <int> adj[MAX];
int grau[MAX];
int pai[MAX];
int grauAux[MAX];

int cont = 0;
pair <int, int> maiorP;

void dfs(int v) {

    visitados[v] = 1;

    for(int x : adj[v]) {

        if(visitados[x] == 1) continue;
        pai[x] = v;

        cont++;
        dfs(x);
    }

    if(grau[v] == 1){
        if(cont > maiorP.second) {
            maiorP.second = cont;
            maiorP.first = v;
        }
        cont--;
        grau[pai[v]]--;
    }

}

int main(){

    memset(visitados, 0, sizeof(visitados));
    memset(grau, 0, sizeof(grau));
    memset(grauAux, 0, sizeof(grauAux));

    int n;

    cin>>n;

    int a, b;

    for(int i = 0; i < n-1; i++) {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        grau[a]++;
        grau[b]++;
        grauAux[a]++;
        grauAux[b]++;
    }

    dfs(1);

    memset(visitados, 0, sizeof(visitados));

    for(int i = 0; i <= n; i++){
        grau[i] = grauAux[i];
    }

    cont = 0;

    dfs(maiorP.first);

    cout<<maiorP.second<<endl;

}
*/
