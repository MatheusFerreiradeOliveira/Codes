//BUSCA BINARIA;
 int n, vetor[100100];
  int buscab(int x){ // declaro a função buscab, que recebe um int como parâmetro
    // declaro os inteiros ini, meio, fim e resp
    int ini=1, fim=n, meio, menor_resp; // ini já começa com 1 e fim com n
    while(ini<=fim){ // enquanto houver algum elemento no intervalo
      meio=(ini+fim)/2; // meio recebe a posição do meio
      if(vetor[meio]>=x){ // se vetor[meio] for maior ou igual a x
         fim=meio-1; // então o primeiro elemento maior ou igual a x pode estar atrás de meio
         menor_resp=vetor[meio]; // e guardo o valor de vetor[meio], caso não haja tal elemento atrás de meio
      }
      // se vetor[meio] ainda é menor que x
      if(vetor[meio]<x) ini=meio+1; // então devo olhar na metade do vetor que está depois de meio
    }
    return menor_resp; // retorno o valor de menor_resp
  }
