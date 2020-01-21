#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n>0)
    {
        int Njogadores, Nobst, Ndados;
        cin>>Njogadores>>Nobst>>Ndados;
        int Posicao_jogador[Njogadores];
        for(int o = 0; o < Njogadores; o++)
        {
            Posicao_jogador[o] = 1;
        }
        int Entrada[Nobst], Saida[Nobst];
        for(int k = 0; k < Nobst; k++)
        {
            cin>>Entrada[k]>>Saida[k];
        }
        int jog[Ndados];
        for(int i =0; i <Ndados;i++)
        {
            cin>>jog[i];
        }
        int cont = 0;
        int aux = Njogadores;
        for(int i =0; i < Ndados; i++)
        {
            if(i >= aux)
            {
                cont = 0;
                aux+=Njogadores;
            }
            Posicao_jogador[cont] += jog[i];
            for(int j=0; j < Nobst; j++)
            {
                if(Posicao_jogador[cont] == Entrada[j])
                {
                    Posicao_jogador[cont] = Saida[j];
                }
            }
            if(Posicao_jogador[cont] >= 100)
            {
                Posicao_jogador[cont] = 100;
                break;
            }
            cont++;
        }
        for(int i= 0; i < Njogadores; i++)
        {
            cout<<"Position of player "<<i+1<<" is "<<Posicao_jogador[i]<<"."<<endl;
        }
        n--;
    }
    return 0;
}


