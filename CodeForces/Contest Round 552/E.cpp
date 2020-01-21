#include <bits/stdc++.h>
#define MAX 200010
using namespace std;

pair<int, int> vet[MAX];
int selec[MAX];
int n, k;

void seleciona(int x, int time) {
    for(int i = 1; i <= k; i++) {
        if(x - i >=0)
            while(selec[x - i] != 0) {
                x--;
                if(x - i < 0) break;
            }
            if(x - i < 0) break;
        selec[x-i] = time;
    }
    for(int i = 1; i <= k; i++) {
        if(x + i < n)
            while(selec[x + i] != 0) {
                x++;
                if(x + i>= n) break;
            }
            if(x + i >= n) break;
        selec[x + i] = time;
    }
}

bool compara(pair<int, int> a, pair<int, int> b) {

    return a.second < b.second;

}

int main() {

    cin>>n>>k;

    int aux;

    for(int i = 0; i < n; i++) {

        cin>>aux;

        vet[i].first = aux;

        vet[i].second = i;

    }

    sort(vet, vet+n);
    int time = 1, mexeu = 0;

    memset(selec, 0, sizeof(selec));

    for(int i = n-1; i >= 0; i--) {

        if(selec[vet[i].second] != 0) continue;

        selec[vet[i].second] = time;

        //cout<<"Marcou o "<<vet[i].second<<" como "<<time<<endl;

        seleciona(vet[i].second, time, mexeu);

        mexeu+=k;

        time++;

        if(time > 2) time = 1;
    }

    sort(vet, vet+n, compara);

    for(int i = 0; i < n; i++) {
        //cout<<"Esse aqui é o do"<<vet[i].first<<" ";
        cout<<selec[vet[i].second];
    }
    cout<<endl;

}

