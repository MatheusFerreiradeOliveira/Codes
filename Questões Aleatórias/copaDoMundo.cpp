#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<char> sobreviventes;
    for(int i = 65, cont = 0; i < 81; cont++, i++){
        sobreviventes.push(i);
    }
    int e, d;
    int aux, aux2;
    for(int cont = 0; cont < 15; cont++){
        cin>>e>>d;
        aux = sobreviventes.front();
        sobreviventes.pop();
        aux2 = sobreviventes.front();
        sobreviventes.pop();
        if(e > d)
            sobreviventes.push(aux);
        else
            sobreviventes.push(aux2);
    }
    cout<<sobreviventes.front()<<endl;
    return 0;
}
