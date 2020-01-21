#include <bits/stdc++.h>
using namespace std;
int main()
{
    typedef struct d
    {
        int mov1;
        int mov2;
    }dados;

    int nj, nq;
    cin>>nj>>nq;
    int jogadores[nj];
    for(int i=0; i < nj; i++)
    {
        jogadores[i] = 0;
    }
    int t1,t2,t3;
    int vencedor = 0;
    cin>>t1>>t2>>t3;
    int Ndados;
    cin>>Ndados;
    dados num[Ndados];
    for(int i=0; i < Ndados; i++)
    {
        cin>>num[i].mov1>>num[i].mov2;
    }
    int i,j;
    for(i=0, j = 0; j < Ndados; i++, j++)
    {
        if(i >= nj)
            i = 0;
        if(jogadores[i] == t1 || jogadores[i] == t2 || jogadores[i] == t3){
            i++;
            if(i >= nj)
                i = 0;
            jogadores[i]+=num[j].mov1;
            jogadores[i]+=num[j].mov2;
            if(jogadores[i] > nq and vencedor == 0){
                vencedor = i+1;
            }
        }
        else{
             jogadores[i]+=num[j].mov1;
            jogadores[i]+=num[j].mov2;
            if(jogadores[i] > nq and vencedor == 0){
                vencedor = i+1;
            }
        }
        cout<<"Jogador"<<i+1<<" "<<jogadores[i]<<endl;
    }
    cout<<vencedor<<endl;
}
