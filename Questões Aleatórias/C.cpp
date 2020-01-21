#include <bits/stdc++.h.>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    long long int quartos[n], cartas[m];
    for(int i = 0; i < n; i++){
        cin>>quartos[i];
    }
    for(int i = 0; i < m; i++){
        cin>>cartas[i];
    }

    long long int quarto = 0;
    int lul = 0;
    long long tira = 0;
    for(int i = 0; i < m; i ++){
        for(int j = lul; j < n; j++){
            quarto = j+1;
            if(cartas[i]- tira > quartos[j]){
                tira+=quartos[j];
                lul++;
            }
            else{
                break;
            }
        }
        cout<<quarto<<" "<<cartas[i] - tira<<endl;
        quarto = 0;
    }
}

