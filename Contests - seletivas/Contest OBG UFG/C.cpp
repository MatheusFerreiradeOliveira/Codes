#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;

    long long int aux, k;

    cin>>n;

    //queue < long long int > itens;

    vector <long long int> valores[n+1];
    vector <long long int> resps[n+1];


    for(int i = 1; i <= n; i++) {
        cin>>k;

        for(int j = 0; j < k; j++) {
            cin>>aux;

            valores[i].push_back(aux);
        }
    }

    for(int i = 1; i <= n; i++) {

        cin>>aux;

        for(int x : valores[aux]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

