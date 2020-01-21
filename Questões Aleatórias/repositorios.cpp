#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int, int> entrada;
    map <int, int> saida;
    int n, m;
    cin>>n>>m;
    int aux1, aux2;
    for(int i=0; i < n; i++){
        cin>>aux1>>aux2;
        entrada[aux1] = aux2;
    }
    for(int i = 0; i < m; i++){
        cin>>aux1>>aux2;
        if(entrada.find(aux1) == entrada.end()){
            saida[aux1] = aux2;
            entrada[aux1] = aux2;
        }
        else{
            for(map<int, int>::iterator it=entrada.begin(); it!=entrada.end(); ++it){
                if(aux1 == it->first && aux2 > it->second){
                    entrada[aux1] = aux2;
                    saida[aux1] = aux2;
                }
            }
        }
    }
    for (map<int,int>::iterator ite=saida.begin(); ite!=saida.end(); ++ite){
      cout<<ite->first <<" "<< ite->second<<endl;
    }
    return 0;
}
