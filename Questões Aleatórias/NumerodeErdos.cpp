#incldue <bits/stdc++.h>
#define max 100
using namespace std;
struct lul{
    string nome;
    string sobrenome;
    int NumerodeErdos = 1000;
};
const int d[max];
void bfs(int v){
    d[v] = 0;
    queue<int> Q;
    Q.push(v);
    while(!Q.empty){
        v = Q.front();
        Q.pop();
        for(int u : g[v]){
            if(d[u] == -1){
                d[u] = d[v]+1;
                Q.push[u];
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector autores;

    for(int i = 0; i < n;i++){
       scanf("%s %s", autores[i].nome, autores[i].sobrenome)
    }
    for(int i =0; i < n; i++){
        string nomeD, sobrenomeD, linha;
        scanf("%s", linha);
        int cont = 0;
        for(char a = linha[cont]; a != '\0'; cont++){
            if(a == ',')
        }
        if(nomeD == "P." && sobrenomeD == "Erdos"){
                for(int j = 0; j < n; j++)
        }
    }



}
