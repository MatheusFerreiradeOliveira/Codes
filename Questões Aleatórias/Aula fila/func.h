typedef struct fila {
    int num;
    struct fila * ant;
    struct fila * prox;
} FILA;

typedef struct elem {
    FILA * first;
    FILA * last;
} ELEM;

void fila_push(ELEM * F, int num){
    FILA * n = (FILA *) malloc(sizeof(FILA));
    n->num = num;
    if(F->first == NULL){
        F->first = n;
        n->ant = NULL;
    } else {
    	F->last->prox = n;
        n->ant = F->last;
    }
    F->last = n;
    n->prox = NULL;
}
void fila_push_mid(ELEM * F, int num, int posi){
    posi--;
    FILA * n = (FILA *) malloc(sizeof(FILA));
    FILA * aux;
    n->num = num;
    if(F->first == NULL){
        F->first = n;
        n->ant = NULL;
    }
    else {
        int cont = 0;
        for(aux = F->first; cont != posi; cont++, aux = aux->prox);
        n->prox = aux;
        n->ant = aux->ant;
        aux->ant->prox = n;
        aux->ant = n;
    }
}

void fila_pop(ELEM *DP)
{
	FILA *aux;
	aux = DP->first;
	if(aux->prox == NULL)
	{
		DP->first = NULL;
		DP->first = NULL;
	}
	else{
		DP->first = DP->first->prox;
		free(aux);
	}

}
void fila_pop_mid(ELEM *DP, int posi)
{
    posi--;
	FILA *aux;
	aux = DP->first;
	if(aux->prox == NULL)
	{
		DP->first = NULL;
		DP->last = NULL;
	}
	else{
		int cont = 0;
        for(aux = DP->first; cont != posi; cont++, aux = aux->prox);
        if(aux->prox == NULL)
        {
            aux->ant->prox = aux->prox;
            DP->last = aux->ant;
            free(aux);
        }
        else{
            aux->ant->prox = aux->prox;
            aux->prox->ant = aux->ant;
            free(aux);
        }
	}

}
void exibir(ELEM *DP)
{
    FILA *aux;
    for(aux = DP->first; aux != NULL; aux = aux->prox)
    {
        printf("%d\n", aux->num);
    }
}

/**/
