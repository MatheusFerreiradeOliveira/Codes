#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int main() {
    int n;

    int aux;

    cin>>n;

    vector <int> valores[MAX];

    int k;

    for(int i = 0; i < n; i++) {

        cin>>k;

        for(int j = 0; j < k; j++) {
            cin>>aux;
            valores[i].push_back(aux);
        }
    }

    vector<int> saida[MAX];

    int a;

    for(int i = 0; i < n; i++) {

        cin>>a;

        for(int x : valores[i])
            saida[a].push_back(x);
    }

    for(int i = 1; i <= n; i++) {

        for(auto x : saida[i]){
            cout<<x<<" ";
        }
        cout<<endl;

    }

}


