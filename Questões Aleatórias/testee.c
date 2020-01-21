#include <stdio.h>
void shell_sort(int vet[], int tamanho){
    int salto = tamanho/2;//Pega metade do tamanho to array;
    while(salto > 0){
            //Quando salto se torna 1, vira um insertion sort;
        int j = 0;//Para não mecher com o I;
        int i;
        for(i = salto; i < tamanho; i++){
            int aux = vet[i];//Posição que será comparada;
            for(j = i; j >= salto && vet[j-salto] > aux; j-=salto){
                int lul = vet[j-salto];
                vet[j-salto] = vet[j];
                vet[j] = lul;
                //Caso seja maior, trocar as posições;
            }
            //vet[j] = aux;
        }
        salto = salto/2;//atualiza o intervalo para checar mais preciso;
    }
}
int main(){

    int tamanho;
    printf("Tamanho do vetor:");
    scanf("%d", &tamanho);
    int vet[tamanho];
    int cont;
    printf("Elementos do vetor:");
    for(cont = 0; cont < tamanho; cont++){
        scanf("%d", &vet[cont]);
    }
    int cont2;
    shell_sort(vet, tamanho);
    for(cont2 = 0; cont2 < tamanho; cont2++){
        printf("%d\n", vet[cont2]);
    }
    return 0;
}

