#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    vector<long long int> positivos;
    vector<long long int> negativos;
    vector<long long int> zero;

    for(int i = 0; i < n; ++i) {
        long long int a;
        cin>>a;
        if(a == 0) zero.push_back(a);
        else if(a < 0) negativos.push_back(a);
        else positivos.push_back(a);
    }

    for(int i = 0; i < zero.size(); ++i) {
        negativos.push_back(zero[i]);
    }

    long long int saida = 0;

    for(int i = 0; i < positivos.size(); ++i) {
        saida += abs(1 - positivos[i]);
    }

    if(negativos.size()%2 == 1){
        saida += abs(1 - negativos[negativos.size() - 1]);
        negativos.pop_back();
    }

    for(int i = 0; i < negativos.size(); ++i) {
        if(negativos[i] == 0) saida += 1;
        else saida += abs(-1 - negativos[i]);
    }

    cout<<saida<<"\n";

}

