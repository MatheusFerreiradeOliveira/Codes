#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,l,palito;
    cin>>c>>l>>palito;
    while(c!=0 and l!=0 and palito!=0)
    {
        int matriz[l][c];
        for(int i =0; i < l; i++)
        {
            for(int j=0; j < c;j++)
            {
                cin>>matriz[i][j];
            }
        }
        int atual =0, resp =0;
        for(int i =0; i < c; i++)
        {
            for(int j=0; j < l; j++)
            {
                if(matriz[j][i] == 0)
                    atual = 0;
                if(matriz[j][i] == 1)
                    atual++;
                if(atual == palito){
                    resp++;
                }
            }
            atual = 0;

        }
        cout<<resp<<endl;
        cin>>c>>l>>palito;
    }

}


