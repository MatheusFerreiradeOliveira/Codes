#include <bits/stdc++.h>
using namespace std;


int main()
{
    int na, nd, atac = 10001, ultimo, penultimo, idultimo;
    while(cin>>na>>nd and na!=0 and nd!=0){
        int atacantes[11], defensores[11];
        for(int i =0; i < na; i++)
        {
            cin>>atacantes[i];
            if(atacantes[i] < atac)
                atac = atacantes[i];
        }
        for(int i =0; i < nd; i++)
        {
            cin>>defensores[i];
            if(defensores[i] < ultimo){
                ultimo = defensores[i];
                idultimo = i;
            }
        }
        defensores[idultimo] = 10001;
        for(int i =0; i < nd; i++)
        {
            if(defensores[i] < penultimo)
                penultimo = defensores[i];
        }
        if(atac < penultimo)
            printf("Y\n");
        else
            printf("N\n");

        atac = penultimo = ultimo = 10001;
    }
    return 0;
}
