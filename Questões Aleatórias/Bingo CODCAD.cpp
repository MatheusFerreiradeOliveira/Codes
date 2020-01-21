//inicia um vetor com todos os numeros ate n e dps vai cehcando se der igual, se der igual coloca um -1 la sla fodc
#include <bits/stdc++.h>
using namespace std;
int Change(int x, int y)
{
    if(x > y)
        return x-y;
    if(y > x)
        return y-x;
    else
        return 0;
}
int main()
{
    int n, bolas;
    cin>>n>>bolas;
    while(n != 0 and bolas != 0)
    {
        int Numeros[n+1];
        for(int i=0; i <= n; i++){
            Numeros[i] = i;
        }
        Numeros[0] = -1;
        int bolasrest[bolas];
        for(int i=0; i < bolas; i++)
        {
            cin>>bolasrest[i];
        }
        for(int i=0; i < bolas; i++)
        {
            for(int j = 1; j < bolas; j++)
            {
                int Joker = Change(bolasrest[i], bolasrest[j]);
                for(int k =1; k < n+1; k ++)
                {
                    if(Joker == Numeros[k])
                    {
                        Numeros[k] = -1;
                        break;
                    }
                }
            }
        }
        bool Deucerto = true;
        for(int i = 0; i < n+1; i++)
        {
            if(Numeros[i] > 0)
                Deucerto = false;
        }
        if(Deucerto)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;

        cin>>n>>bolas;
    }
}
