#include <bits/stdc++.h>
using namespace std;
bool valida(int i, int j)
{
    return ( i >=0 and i < 8) and (j >= 0 and j < 8);
}
int main()
{
    int xcavalo, ycavalo, xpiao, ypiao;
    string peca;
    int jogadas = 1;
    while(cin>>peca and peca != "0")
    {
        int matriz[8][8];
        memset(matriz, 0, sizeof matriz);
        xcavalo = '8' - peca[0];
        ycavalo = peca[1] - 'a';
        for(int i =0; i < 8; i++)
        {
            cin>>peca;
            xpiao = '8' - peca[0];
            ypiao = peca[1] - 'a';
            if(valida(xpiao+1, ypiao -1))
                matriz[xpiao+1][ypiao -1] = 1;
            if(valida(xpiao+1, ypiao +1))
                matriz[xpiao+1][ypiao +1] = 1;
        }
        /*for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                cout<<matriz[i][j]<< " ";
            }
            cout<<endl;
        }*/
        int movX[8] = {2, 2, 1, -1, -2, -2, 1, -1};
        int movY[8] = {-1, 1, 2 , 2, -1, 1, -2, -2};
        int cont = 0;
        int davezX;
        int davezY;
        for(int i =0; i < 8; i++)
        {
            davezX = xcavalo+movX[i];
            davezY = ycavalo+movY[i];
            if(valida(davezX, davezY) and matriz[davezX][davezY] == 0)
                cont++;
        }
        cout<<"Caso de Teste #"<<jogadas<<": "<<cont<<" movimento(s)."<<endl;
        jogadas++;
    }
}
