typedef struct lista2
{
    char nome[80];
    int idade;
    struct lista2 *prox;
    struct lista2 *ant;

}LISTA;

LISTA * criarr(LISTA* l)
{
    return NULL;
}

LISTA *inserir_inicio(LISTA *l, char nome[], int idade)
{
    LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->prox = l;
    return novo;
}

LISTA *inserir_meio(LISTA *l, char nome[], int idade, int posicao)
{
    LISTA* aux;
    LISTA* aux2;
    LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    aux = l;
    aux2 = l->prox;
    int i;
    for(i = 0; i < posicao; i++, aux = aux->prox, aux2 = aux2->prox)
    {
           if(i == posicao-1)
           {
                novo->prox = aux2;
                novo->ant = aux;
                aux->prox = novo;
                aux2->ant = novo;
           }
    }
    return l;
}

LISTA *inserir_final(LISTA *l, char nome[], int idade)
{
    LISTA* aux;
    LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    for(aux = l; aux != NULL; aux = aux->prox)
    {
           if(aux->prox == NULL)
           {
                aux->prox = novo;
                novo->ant = aux;
                novo->prox = NULL;
           }
    }
    return l;
}
LISTA *retirar_inicio(LISTA *l)
{
    LISTA* aux;
    aux = l->prox;
    aux->ant = l;
    free(l);
    l = aux;
    return l;
}

LISTA *retirar_meio(LISTA *l,  int posicao)
{
    LISTA* aux;
    LISTA* aux2;
    aux = l;
    aux2 = l->prox;
    int i;
    for(i=0; i <= posicao; aux=aux->prox, i++, aux2 = aux2->prox)
    {
        if(i == posicao)
        {
            aux2->ant = aux->ant;
            aux->ant->prox = aux2;
            free(aux);
        }
    }
    return l;
}
LISTA *retirar_final(LISTA *l)
{
    LISTA* aux;
    for(aux = l; aux != NULL; aux=aux->prox)
    {
        if(aux->prox == NULL)
        {
            aux->ant->prox = NULL;
            free(aux);
        }
    }
    return l;
}


void exibir2 (LISTA *l)
{
    if(l == NULL)
        printf("Lista vazia");
    else
    {
        LISTA *aux;
        for( aux = l; aux != NULL; aux = aux->prox)
        {
            printf("Nome do mlk: %s\n", aux->nome);
            printf("Idade do meliante: %d\n", aux->idade);
        }
    }
}

