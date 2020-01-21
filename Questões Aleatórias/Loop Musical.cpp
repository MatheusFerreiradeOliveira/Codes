#include <bits/stdc++.h>
using namespace std;
int main()
{

    int total;
    cin>>total;
    while(total != 0)
    {
        int Npicos = 1;
        bool subindo;
        int vet[total];
        for(int i=0; i < total; i++)
        {
            cin>>vet[i];
        }
        if(vet[0] == vet[1])
            Npicos = 0;
        if((total == 2) and (vet[1]!=vet[0]))
            Npicos = 2;
        else
        {
            if(vet[1] > vet[0])
                subindo = true;
            else
                subindo = false;
            for(int i = 0; i < total-1; i++)
            {
                if(subindo and vet[i+1] < vet[i])
                {
                    subindo = false;
                    Npicos++;
                }
                else if(!subindo and vet[i+1] > vet[i])
                {
                    subindo = true;
                    Npicos++;
                }
            }
            if(subindo and (vet[total-1] > vet[total]))
                Npicos++;
            if(!subindo and (vet[total-1] < vet[total]))
                Npicos++;
        }
        cout<<Npicos<<endl;
        cin>>total;
    }
    return 0;
}



