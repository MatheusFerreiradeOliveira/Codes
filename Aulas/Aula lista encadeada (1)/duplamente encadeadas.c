#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_listas.h"
int main()
{
    Lista *l1;
    l1 = criar();
    int i;
    l1 = inserir_ord(l1, "shaushau4", 10);
    l1 = inserir_ord(l1, "shaushau1", 4);
    l1 = inserir_ord(l1, "shaushau3", 9);
    l1 = inserir_ord(l1, "shaushau2", 7);
    l1 = inserir_ord(l1, "shsauhsua5", 11);    //l1 = inserir_mid(l1, "caaarlos", 18, 1);
    //l1 = retirar_mid(l1, 2);
    //l1 = retirar_fim(l1);
    exibir(l1);
}

