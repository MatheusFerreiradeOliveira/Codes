#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

int n;
int mat[MAX][MAX];
vector<int> adj[MAX];
int cor[MAX];

void colore(int v){

    cor[v] = 0;

    queue<int> lul;
    lul.push(v);

    int pos = 0;

    while(!lul.empty()){

        int runner = lul.front();

        lul.pop();

        for(int x : adj[runner]){

            int vertice = x;

            if(cor[vertice] == -1){
                cor[vertice] = 1 - cor[runner];
                lul.push(vertice);
            }
        }
    }
}

bool checa_bipartido(){

    for(int i = 0;i < n;i++){
        if(cor[i] == -1){
            colore(i);
        }
    }

    for(int i = 0;i < n;i++){
        for(int j : adj[i]){

            int v = j;
            if(cor[i] == cor[v]) return false;
        }
    }

    return true;
}

int main() {

    memset(cor, -1, sizeof cor);

    cin>>n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>mat[i][j];

            if(mat[i][j] == 0) {
                adj[i].push_back(j);
            }
        }
    }

    bool deucerto = checa_bipartido();

    if(deucerto)
        cout<<"Bazinga!"<<endl;
    else
        cout<<"Fail!"<<endl;

}
