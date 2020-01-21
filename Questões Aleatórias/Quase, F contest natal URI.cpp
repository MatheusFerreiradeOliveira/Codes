#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int t = 0;
    cin>>t;
    while(t > 0){
        string p[2], resp;
        int m =0;
        while(m < 2){
            getline (cin, p[m]);
            m++;
        }
        string p1 = p[0], p2 = p[1];
        int Tamanho = p1.size();
        bool davez = true;
        int cont = 0;
        int contB =0;

        for(int i = 0; i <= Tamanho; i++)
        {

            if(davez){
                    resp += p1[i];
                    cont++;
                    if(cont == 2)
                    {
                        davez = false;
                        cont = 0;
                    }
            }
            if(davez==false){
                while(cont < 2){
                    resp += p2[contB];
                    cont++;
                    contB++;
                }
                if(cont == 2)
                {
                    davez = true;
                    cont = 0;
                }
            }
        }
        cout<<resp<<endl;
        t--;
    }
    return 0;
}
