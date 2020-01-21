#include <stdlib.h>
#include <stdio.h>
typedef struct lista{
    void *info;
    struct lista *prox;
}Lista;

typedef struct ponto{
    int x, y;
}Ponto;

typedef struct p{
    string nome;
}pessoa;

Lista *criar()
{
    return NULL;
}
Lista *inserir_i(Lista *L, void *P){
    Lista *n = (Lista*)malloc(sizeof(Lista));
    n->info = P;
    n->prox = L;
    return n;
}

Lista *criarp(Lista *l, int a, int b)
{
    Ponto *p = (Ponto*)malloc(sizeof(Ponto));
    p->x = a;
    p->y = b;
    return inserir_i(l, p);
}

void exibir(Lista *l)
{
    Lista *aux;
    Ponto *p;
    for(aux = l; aux != NULL;aux = aux->prox)
    {
        p = (Ponto*)aux->info;
        printf("x = %d and y = %d\n", p->x, p->y);
    }
}

void exibirrr(void *info)
{
    Ponto *P = (Ponto*)info;
    printf("x = %d, y = %d", p->x, p->y);
}

void percorrer( Lista *L)
{
    Lista *aux = l;
    while(aux!=NULL)
    {
        exibirrr(aux->info);
        aux=aux->prox;
    }
}

int main()
{
    Ponto p;
    Cadastro P;

    Lista *l1;
    Lista *l2;

    l1 = criar();
    lista
    l1 = criarp(l1, 2, 3);
    l1 = criarp(l1, 4, 5);
    l1 = criarp(l1, 6, 7);

    exibir(l1);
}

