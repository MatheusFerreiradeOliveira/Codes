#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int qntA, qntTortas;
        cin>>qntTortas>>qntA;
        qntA++;
        int vet[qntTortas];
        double tam = 0;
        int aux;
        for(int i = 0; i < qntTortas; i++){
            cin>>vet[i];
        }
        sort(vet, vet+qntTortas);

        double saida;
        if(qntTortas%2 == qntA%2)
            saida = (vet[0]*qntTortas)/qntA;
        else {
            if(qntTortas > 1)
                saida = (vet[0]*(qntTortas-1))/qntA;
            else
                saida = vet[0]/qntA;
        }


        for(int i = 0; i < qntTortas; i++){
            int daPcomer = 1;
            for(int j = i+1; j < qntTortas; j++){
                daPcomer+=vet[j]/vet[i];
            }
            if(daPcomer >= qntA)
                saida = vet[i];
        }

        tam = (saida * saida * 3.1416);

        cout<<tam<<fixed<<setprecision(4)<<endl;
    }
    return 0;
}
