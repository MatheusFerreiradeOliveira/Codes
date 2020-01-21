#include <bits/stdc++.h>
using namespace std;

int main () {

    set<int> sorteados;

    for(int i = 0; i < 6; i++) {
        int a;
        cin>>a;
        sorteados.insert(a);
    }

    int n;

    cin>>n;

    int s1 = 0, s2 = 0, s3 = 0;

    for(int i = 0; i < n; i++) {
        int k;
        cin>>k;
        int saida = 0;
        for(int j = 0; j < k; j++) {
            int lul;
            cin>>lul;
            if(sorteados.count(lul) > 0) saida++;
        }

        if(saida == 4) s3++;
        else if(saida == 5) s2++;
        else if(saida > 5) s1++;
    }

    cout<<s1<<" "<<s2<<" "<<s3<<endl;
}

