typedef struct l
{
    char nome[50];
    int idade;
    struct l *prox;
}Lista;

Lista *criar(){
    return NULL;
}

int comprimento(Lista *l)
{
    Lista *aux;
    int contador = 0;
    for(aux = l; aux != NULL; aux = aux->prox)
    {
        contador++;
    }
    return contador;
}
int maiores(Lista *l, int n)
{
    Lista *aux;
    int contador = 0;
    for(aux = l; aux != NULL; aux = aux->prox)
    {
        if(aux->idade > n)
            contador++;
    }
    return contador;
}
Lista *ultimo(Lista *l)
{
    Lista *aux;
    for(aux = l; aux != NULL; aux = aux->prox)
    {
        if(aux->prox == NULL)
            return aux;
    }
}

Lista *concatenar(Lista *l, Lista *z)
{
    Lista *aux;
    Lista *aux2;
    aux = l;
    aux2 = z;
    if(aux == NULL)
    {
         return z;
    }
    else{
        for(; aux->prox != NULL; aux = aux->prox);
        aux->prox = aux2;
        return l;
    }
}
Lista * retiraN(Lista * L, int n){

    Lista * aux = L;
    Lista * ant = NULL;

    while(aux != NULL)
        {
            if(aux->idade == n)
            {
                    ant->prox = aux->prox;
                    free(aux);
                    aux = ant->prox;
            }
            else{
                ant = aux;
                aux = aux->prox;
            }
        }
    return L;
}

Lista * separaaa(Lista * L, int n){

    Lista * aux;
    Lista * separaaaa;

    for(aux = L; aux != NULL; aux = aux->prox){
        if(aux->idade == n)
        {
            separaaaa = aux->prox;
            aux->prox = NULL;
            return separaaaa;
        }
     }
}

Lista *inserir_ini(Lista *l, char nome[], int idade)
{
    Lista * n = (Lista*)malloc(sizeof(Lista));
    strcpy(n->nome, nome);
    n->idade = idade;
    n->prox = l;
    return n;
}
Lista * mergee(Lista * L, Lista *Z){

    Lista * aux;
    Lista * aux2;
    Lista *juntas = criar();
    Lista *aux3 = juntas;

    for(aux = L, aux2 = Z; aux != NULL && aux2 != NULL; aux = aux->prox, aux2 = aux2->prox){
        aux3 = inserir_ini(aux3, aux->nome, aux->idade);
        aux3 = inserir_ini(aux3, aux2->nome, aux2->idade);
     }

     return aux3;
}
Lista * inverte(Lista * L){

    Lista * aux;
    Lista *inverter = criar();

    for(aux = L; aux != NULL; aux = aux->prox){
        inverter = inserir_ini(inverter, aux->nome, aux->idade);
     }

     return inverter;
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
    Lista *aux;
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
Lista* inserir_ord(Lista *l, char nome[], int idade)
{
    Lista *aux;
    Lista *ant = NULL;
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    aux = l;
    while(aux != NULL && aux->idade < idade)
    {
        ant = aux;
        aux = aux->prox;
    }
    if(ant == NULL)
    {
        novo->prox = l;
        l = novo;
    }
    else{
        novo->prox = ant->prox;
        ant->prox = novo;
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


