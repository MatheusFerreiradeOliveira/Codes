#include <bits/stdc++.h>
using namespace std;

bool compara(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}
int main(){
    int n, m;
    cin>>n>>m;
    int runner;
    pair<int, int>carros[n];
    for(int i = 0; i < n; i++){
        carros[i].first = i+1;
        for(int j = 0; j < m; j++){
            cin>>runner;
            carros[i].second += runner;
        }
    }

    sort(carros, carros+n, compara);

    for(int i = 0; i < 3; i++){
        cout<<carros[i].first<<endl;
    }
}




