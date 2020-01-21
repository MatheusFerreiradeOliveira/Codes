#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

vector<int> adj[MAX];
int visit[MAX];
int saida = 0;

int main() {

    int p, ins, n;

    cin>>p>>ins>>n;

    int vet[n];

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }

    for(int i = 0; i < n; i++) {

        if(p > vet[i]) {
            break;
        }
        if(p == vet[i]){
            saida++;
            break;
        }

        if(p + ins > vet[i]){
            ins -= (p + ins - vet[i]);
            if(i > 0) saida++;
        }

        if (ins <= 0) break;
    }

    cout<<saida<<endl;

}






