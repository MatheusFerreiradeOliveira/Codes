#include <bits/stdc++.h>
#define MAX1 510
#define MAX2 10001
using namespace std;

int n, m;
//int peso[MAX];
int pai[MAX1];
vector<pair<double, pair<int, int>>> aresta;
//vector<pair<double, pair<int, int>>> mst;

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int a, int b){

    pai[find(a)] = find(b);

    /*a = find(a);
    b = find(b);

    if(peso[a] < peso[b])
        pai[a] = b;
    else if(peso[b] < peso[a])
        pai[b] = a;
    else{
        pai[a] = b;
        peso[b]++;
    }*/
}

int main(){

    int k;

    scanf("%d", &k);

    while(k--) {

        cin>>n;

        //memset(pai, 0, sizeof pai);
        //memset(peso, 0, sizeof peso);
        //memset(aresta, 0, sizeof aresta);
        //memset(mst, 0, sizeof mst);

        pair<int, int> dists[n];

        memset(pai, 0, sizeof pai);

        for(int i = 0;i < n;i++){
            cin>>dists[i].first>>dists[i].second;
        }

        //cout<<"passou leitura"<<endl;

        for(int i = 0; i < n; i++) {

            int a = dists[i].first;
            int b = dists[i].second;

            for(int j = 0; j < n; j++) {

                if(i == j) continue;

                int c = dists[j].first;
                int d = dists[j].second;

                double dist = sqrt(((a-c) * (a-c)) + ((b-d) * (b-d)));

                aresta.push_back({dist, {i, j}});

            }
        }

        //cout<<"passou montagem"<<endl;

        /*int ajuda = 0;

        for(auto x : aresta) {
            cout<<"Dist = "<<x.first<<" ";
            ajuda++;
            if(ajuda==n-1) {
                cout<<endl;
                ajuda = 0;
            }
        }*/

        sort(aresta.begin(), aresta.end());

        for(int i = 0;i < n;i++){
            pai[i] = i;
        }

        int tam = 0;
        double saida = 0.0;

        for(int i = 0;i < aresta.size();i++){

            pair<double, pair<int, int>> aux = aresta[i];

            int lol = aux.second.first;
            int lul = aux.second.second;

            //cout<<lul<<" "<<lol<<endl;

            if( find(lol) != find(lul) ){
                //cout<<"Entrou aq"<<endl;
                join(lol, lul);
                //mst[tam] = aux;
                tam++;
                saida += aux.first;
            }
        }

        saida /= 100; //valor ta dando 100x maior sempre, vai q

        //cout<<"passou da treta"<<endl;

        printf("%.2f\n", saida);

        aresta.clear();
    }

    return 0;
}
