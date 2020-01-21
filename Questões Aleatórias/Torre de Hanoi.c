#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct pilha
{
    int numero;
    struct pilha *prox;
    struct pilha *ant;
}Pilha;

Pilha *criar()
{
    return NULL;
}

Pilha *inserir_inicio(Pilha *p, int valor)
{
        Pilha *novo = (Pilha*)malloc(sizeof(Pilha));
        novo->numero = valor;
        novo->prox = p;
        return novo;
}

Pilha *inserir_final(Pilha *p, int valor)
{
        Pilha *aux;
        Pilha *novo = (Pilha*)malloc(sizeof(Pilha));
        novo->numero = valor;
        for(aux = p; aux->prox!= NULL; aux = aux->prox);
        aux->prox = novo;
        novo->prox = NULL;
        return p;
}

void exibir(Pilha *p1, Pilha *p2, Pilha *p3)
{
    Pilha *aux1, *aux2, *aux3;
    for(aux1 = p1, aux2 = p2, aux3 = p3; aux1 != NULL; aux1 = aux1->prox, aux2 = aux2->prox, aux3 = aux3->prox)
    {
        printf("%d                  %d                  %d\n", aux1->numero, aux2->numero, aux3->numero);
    }
    printf("A                  B                  C\n");
}

Pilha *ultimo(Pilha *p)
{
    Pilha *aux;
    if(p == NULL)
        return NULL;
    for(aux = p; aux->numero == NULL && aux->prox != NULL; aux = aux->prox);
    return aux;
}


int main()
{
    int n;
    scanf("%d", &n);
    int valores[n+1];

    memset(valores, 0, 4*(n+1));

    int i = 1;
    for(; i < n+1; i++)
        valores[i] = i;

    Pilha *p1, *p2, *p3;
    p1 = criar();
    p2 = criar();
    p3 = criar();

    int j;
    for(j = n; j > 0; j--)
    {
        p1 = inserir_inicio(p1, valores[j]);
    }
    exibir(p1, p2, p3);
    return 0;
}
