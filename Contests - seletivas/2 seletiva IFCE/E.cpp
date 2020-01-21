#include <bits/stdc++.h>
#define MAX 25000000
using namespace std;

/*bool e_primo[MAX];

int crivo(int k, int n) {
    e_primo[1] = 1;

    if(k == 0) k++;

    for(int i = k+1; i <= n; i++) {
        if(!e_primo[i]){
            for(int j = 2; j*i <= n; ++j){
                e_primo[j*i] = 1;
            }
        }
    }
}*/

int main() {

    //memset(e_primo, 0, sizeof e_primo);

    //crivo(MAX);

    int n, maior = 0;

    while(scanf("%d", &n) && n!= 0) {

        /*if(n > maior) {
            crivo(maior, n);
            maior = n;
        }*/

        printf("1");

        for(long long int i = 2; i <= sqrt(n); i++) {
            if(i*i <= n){
                printf(" %d", i*i);
            }
        }
        printf("\n");
    }

}
