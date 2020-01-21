#include <bits/stdc++.h>
using namespace std;

struct pessoa
{
    string nome, cor;
    char tamanho;
};

bool confere(pessoa p1, pessoa p2)
{
    if(p1.cor != p2.cor)
    {
        if(p1.cor == "branco") return true;
        return false;
    }
    else
    {
        if(p1.tamanho != p2.tamanho)
        {
            if(p1.tamanho == 'P') return true;
            if(p2.tamanho == 'P') return false;
            if(p1.tamanho == 'M') return true;
            if(p2.tamanho == 'M') return false;
            return true;
        }
        else{
            int t, t2, realoficial;
            t = p1.nome.size();
            t2 = p2.nome.size();

            string n1, n2;
            n1 = p1.nome;
            n2 = p2.nome;

            if(t>t2) realoficial = t2;
            else realoficial = t;

            for(int i =0; i < realoficial; i++)
            {
                if(n1> n2)
                    return false;
            }
            return true;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    getchar();
    pessoa p[n];
    while(n!=0)
    {
        int cont;
        cont = 0;
        while(cont<n){
            fflush(stdin);
            getline(cin, p[cont].nome);
            cin>>p[cont].cor>>p[cont].tamanho;
            cont++;
        }
        sort(p, p+n, confere);
        for(int i=0; i < n; i++)
        {
            cout<<p[i].cor<<" "<<p[i].tamanho<<" "<<p[i].nome<<endl;
        }
        cout<<endl;
        cin>>n;
    }
}
