#include <bits/stdc++.h>
using namespace std;

int main() {

    string k;

    cin>>k;

    long long int n = 0;
    long long int cont = 0;

    for(int i = k.size() - 1; i >= 0; i--) {
        n += ((k[i] - 48) * pow(2, cont));
        cont++;
    }

    //cout<<n<<endl;

    int m;

    cin>>m;

    long long int saida = 0;
    multiset<long long int> lul;

    for(int i = 0; i < m; i++) {
        long long int davez;

        cin>>davez;

        if(n % davez == 0){
            lul.insert(davez);
            saida++;
        }
    }

    if(saida > 0){
        int mds = lul.size() - 1;
        for(int x : lul){
            if(mds > 0)
                cout<<x<<" ";
            else
                cout<<x<<endl;
            mds--;
        }
    }
    else {
        cout<<"Nenhum"<<endl;
    }

}



