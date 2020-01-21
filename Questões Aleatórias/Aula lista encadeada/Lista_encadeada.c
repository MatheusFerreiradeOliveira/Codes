#include <stdio.h>
#include <string.h>
#include "funcoes_listas.h"
int main()
{
    Lista *l1;
    l1 = criar();
    int i, j = 10;
    for(i =0; i < 3; i++)
    {
        char nome1[80];
        gets(nome1);
        l1 = inserir_ini(l1, nome1, j);
        j--;
    }
    l1 = inserir_mid(l1, "caaarlos", 18, 1);
    l1 = retirar_mid(l1, 2);
    l1 = retirar_fim(l1);
    exibir(l1);
}
