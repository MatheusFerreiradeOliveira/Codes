#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, c, posi;
    while(cin>>l>>c>>posi and c!=0 and l!= 0 and posi !=0){
        bool estourou = false;
        int matriz[l][c];
        posi = posi-1;
        for(int i=0; i < l; i++)
        {
            for(int j=0; j<c;j++)
                cin>>matriz[i][j];
        }
        int taaqui = 0;
        while(taaqui < l)
        {
            int maisproxD = 0, maisproxE = 0;
            for(int i = posi; i < c; i++)
            {
                if(matriz[taaqui][i] > maisproxE)
                    maisproxE = matriz[taaqui][i];
            }
            int deslocamento;
            for(int i = 0; i < posi; i++)
            {
                if(matriz[taaqui][i] > maisproxD)
                    maisproxD = matriz[taaqui][i];
            }
            //cout<<"Mais prox D "<<maisproxD<< " Mais prox E "<<maisproxE<<endl;
            if(maisproxE > maisproxD)
            {
                deslocamento = maisproxE-maisproxD;
                for(int i = 0; i < deslocamento; i++)
                {
                    posi--;
                    if(matriz[taaqui][posi] != 0){
                        estourou = true;
                        break;
                    }
                }
            }
            else if(maisproxE < maisproxD)
            {
                deslocamento = maisproxD-maisproxE;
                for(int i = 0; i < deslocamento; i++)
                {
                    posi++;
                    if(matriz[taaqui][posi] != 0){
                        estourou = true;
                        break;
                    }
                }
            }
            if(estourou){
                cout<<"BOOM "<<taaqui+1<<" "<<posi+1<<endl;
                break;
            }
            else
                taaqui++;
        }
        if(!estourou)
            cout<<"OUT "<<posi+1<<endl;
    }
    return 0;
}
