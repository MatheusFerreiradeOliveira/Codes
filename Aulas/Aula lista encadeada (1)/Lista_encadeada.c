#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_listas.h"
#include "funcoes_listas_duplas.h"
int main()
{
    Lista *l1;
    LISTA *l2;
    Lista *l3;
    l1 = criarr(l1);
    l2 = criarr(l2);
    l3 = criarr(l3);

    l1 = inserir_ini(l1, "a", 19);
    l2 = inserir_inicio(l2, "b", 19);
    l1 = inserir_ini(l1, "c", 21);
    l1 = inserir_ini(l2, "d", 20);

    //l1 = inserir_ini(l1, "carlos", 19);
    //l1 = retirar_inicio(l1);
    //l1 = retirar_meio(l1 , 2);
    //l1 = retirar_final(l1);
    //l1 = retiraN(l1, 19);
    //l1 = inverte(l1);
    exibir2(l2);
    //printf("%s", uultimo->nome);
}
