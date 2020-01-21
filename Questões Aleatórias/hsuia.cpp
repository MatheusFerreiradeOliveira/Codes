#include <bits/stdc++.h>
using namespace std;
int main(){
    int Am, Rm, Em, Av, Rv, Ev;
    cin>>Am>>Rm>>Em>>Av>>Rv>>Ev;
    getchar();
    string entrada;
    getline(cin, entrada);
    int tempoM = 0, tempoV = 0;
    tempoM+=2*Am+Rm+(Em*entrada.size());
    tempoV+=2*Av+Rv+(Ev*entrada.size());
    if(tempoM < tempoV)
        cout<<"Matheus"<<endl;
    else if(tempoV < tempoM)
        cout<<"Vinicius"<<endl;
    else
        cout<<"Empate"<<endl;
    return 0;
}
