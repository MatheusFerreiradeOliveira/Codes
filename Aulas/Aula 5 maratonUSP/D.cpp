#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    pair <int, int> day[n];

    for(int i = 0; i < n; i++) {
        cin>>day[i].first>>day[i].second;
    }

    int saida = 0;

    int preco = day[0].second;

    for(int i = 0; i < n; i++) {

        preco = min(day[i].second, preco);

        saida += day[i].first * preco;
    }

    cout<<saida<<endl;

    return 0;
}


