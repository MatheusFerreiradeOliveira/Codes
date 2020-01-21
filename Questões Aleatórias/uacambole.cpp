#include <bits/stdc++.h>
using namespace std;
int  main(){
    string n;
    int vet[12];
    while(cin>>n){
        memset(vet, 0, sizeof(vet));
        for(int i = 0; i < n.size(); i++){
            if(n[i] == '0')vet[0]++;
            if(n[i] == '1')vet[1]++;
            if(n[i] == '2')vet[2]++;
            if(n[i] == '3')vet[3]++;
            if(n[i] == '4')vet[4]++;
            if(n[i] == '5')vet[5]++;
            if(n[i] == '6')vet[6]++;
            if(n[i] == '7')vet[7]++;
            if(n[i] == '8')vet[8]++;
            if(n[i] == '9')vet[9]++;
        }
        int maior = 0, idmaior = -1;
        for(int i = 0; i <= 9; i++){
            if(vet[i] >= maior){
                maior = vet[i];
                idmaior = i;
            }
        }
        printf("%d\n", idmaior);
    }
    return 0;
}
