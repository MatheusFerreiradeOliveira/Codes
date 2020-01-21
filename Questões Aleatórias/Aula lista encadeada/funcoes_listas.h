typedef struct l
{
    char nome[50];
    int idade;
    struct l *prox;
}Lista;

Lista *criar(){
    return NULL;
}

Lista *inserir_ini(Lista *l, char nome[], int idade)
{
    Lista * n = (Lista*)malloc(sizeof(Lista));
    strcpy(n->nome, nome);
    n->idade = idade;
    n->prox = l;
    return n;
}

void exibir (Lista *l)
{
    if(l == NULL)
        printf("Lista vazia");
    else
    {
        Lista *aux;
        for( aux = l; aux != NULL; aux = aux->prox)
        {
            printf("Nome do mlk: %s\n", aux->nome);
            printf("Idade do meliante: %d\n", aux->idade);
        }
    }
}
Lista* inserir_mid(Lista *l, char nome[], int idade, int posicao)
{
    Lista *aux = (Lista*)malloc(sizeof(Lista));
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    aux = l;
    int i;
    for(i = 0; i < posicao; i++, aux = aux->prox)
    {
        if(i == posicao-1)
        {
            novo->prox = aux->prox;
            aux->prox = novo;
        }
    }
    return l;
}
Lista* retirar_mid(Lista *l, int posicao)
{
    Lista *aux = (Lista*)malloc(sizeof(Lista));
    Lista *aux2 = (Lista*)malloc(sizeof(Lista));
    aux = l;
    aux2 = l->prox;
    int i;
    for(i = 0; i < posicao; i++, aux = aux->prox, aux2 = aux2->prox)
    {
        if(i == posicao-1)
        {
            aux->prox =  aux->prox->prox;
            free(aux2);
        }
    }
    return l;
}
Lista* retirar_fim(Lista *l)
{
    if(l == NULL)
        printf("Lista vazia");
    else{
        Lista *aux = (Lista*)malloc(sizeof(Lista));
        Lista *aux2 = (Lista*)malloc(sizeof(Lista));
        aux = l;
        aux2 = l->prox;
        int i;
        for(i = 0 ; aux != NULL ; i++, aux = aux->prox, aux2 = aux2->prox)
        {
            if(aux2->prox == NULL)
            {
                free(aux2);
                aux->prox = NULL;
            }
        }
    }
    return l;
}

typedef struct list
{
    char nome[50];
    int idade;
    struct list *prox;
    struct list *ant;
}LISTADUPLA;

LISTADUPLA* criarr(LISTADUPLA L)
{
    L = NULL;
    L->ANT = NULL;
    return L;
}


