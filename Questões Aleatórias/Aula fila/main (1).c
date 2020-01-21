#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main(){

    ELEM* e = (ELEM*)malloc(sizeof(ELEM));
    e->first = NULL;
    e->last = NULL;

    fila_push(e, 2);
    fila_push(e, 3);
    fila_push(e, 5);
    fila_push_mid(e, 4, 3);
    fila_pop_mid(e, 4);
    fila_pop(e);
    exibir(e);
    return 0;
}
