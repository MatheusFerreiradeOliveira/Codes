#include <bits/stdc++.h>
using namespace std;
struct STACK
{
        int *elementos, topo = -1;
        int tamanho = 10;
        STACK()
        {
            elementos = (int*)malloc(sizeof(int)*tamanho);
            topo = -1;
        }
        void push(int valor)
        {
            Aumenta();
            elementos[++topo] = valor;
        }
        bool vazia()
        {
            return (topo == -1);
        }
        void pop()
        {
            if(!vazia())
                --topo;
        }
        void Aumenta()
        {
            if(topo == tamanho-1)
            {
                tamanho = tamanho*2;
                int aux[tamanho];
                int tam = tamanho/2;
                for(int i = 0; i < (tam/2); i++)
                {
                    aux[i] = elementos[i];
                }
                elementos = aux;
            }
        }
        void show()
        {
            if(!vazia())
            {
                for(; topo >= 0; topo--)
                    cout<<elementos[topo];

            }
        }
};
int main()
{
    STACK pilha;
    int x = 22;
    while(x > 0)
    {
        int resto = x%2;
        x = x/2;
        pilha.push(resto);
    }
    pilha.show();

}

