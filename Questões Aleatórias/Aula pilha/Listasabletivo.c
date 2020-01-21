#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct pilha
{
    char letra;
    struct pilha *prox;
}Pilha;

Pilha *criar()
{
    return NULL;
}

Pilha *inserir_topo(Pilha *p, char valor)
{
        Pilha *novo = (Pilha*)malloc(sizeof(Pilha));
        novo->letra = valor;
        novo->prox = p;
        return novo;
}
Pilha *remover_topo(Pilha *p)
{
        Pilha *aux;
        aux = p;
        p = p->prox;
        free(aux);
        return p;
}
Pilha *remover_qualquer(Pilha *p, int posi)
{
        posi--;
        Pilha *aux, *aux2;
        Pilha *p2;
        p2 = NULL;
        int i;
        for(i = 0, aux = p; i < posi; i++, aux = aux->prox)
        {
            p2 = inserir_topo(p2, aux->letra);
            p = remover_topo(p);
        }
        p = remover_topo(p);
        exibir(p);
        printf("\n");
        exibir(p2);
        printf("\n");
        aux2 = p2;
        for(; aux2->prox != NULL; aux2 = aux2->prox)
        {
            p = inserir_topo(p, aux2->letra);
        }
        return p;
}
void exibir(Pilha *p)
{
        Pilha *aux;
        for(aux = p; aux!= NULL; aux = aux->prox){
            printf("%c", aux->letra);
        }
}

int main()
{
    Pilha *p1;
    p1 = criar();
    char nome[80];
    scanf("%[^\n]", nome);
    int i;
    char davez;
    for(i = 0; i < strlen(nome); i++)
    {
        davez = nome[i];
        p1 = inserir_topo(p1, davez);
    }
    /*int j;
    int verdade = 1;
    Pilha *aux;
    for(j = 0, aux = p1; j < strlen(nome); j++, aux = aux->prox)
    {
        if(nome[j] != aux->letra)
            verdade = 0;
    }
    if(verdade == 1)
        printf("Palindromo");
        */
    p1 = remover_qualquer(p1, 4);
    exibir(p1);
    printf("\n");
    //p1 = remover_qualquer(p1, 3);
    //exibir(p1);
    return 0;
}
