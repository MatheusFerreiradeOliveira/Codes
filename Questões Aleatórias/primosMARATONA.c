#include <stdio.h>
using namespace std;

  bool e_primo(int x){
    if(x == 1)  return 0;
    for(int i = 2; i*i <= x; ++i){ //note que se o número for 2 ele não entra no loop, comportamento desejado
      if(x % i == 0){ //se o resto de x por i for 0, então i divide x
        return 0;
      }
    }
    return 1;
  }
  int main(){
    int n;
    scanf("%d", &n);
    int saida = e_primo(n);
    printf("%d\n", saida);
  }
