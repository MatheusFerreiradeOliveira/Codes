#include <bits/stdc++.h>
#define MEUCU(a,b)(a < 0 ? -a : a)
using namespace std;
float somatorio(int *vet, float n)
{
    float soma = 0;
    for(int i =0; i < n; i++)
    {
        soma+=vet[i];
    }
    return soma/n;
}
float variation(int *vet, float n, int m)
{
    float soma =0;
    for(int i= 0; i <10; i++)
    {
        soma += (vet[i] - m)*(vet[i] - m);
    }
    return soma/n;
}
float DePe(float vari)
{
    return sqrt(vari);
}
int main()
{
    int a;
    cin>>a;

    printf("%d", MEUCU(a));
    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    float media = somatorio(x, 10);
    float var = variation(x, 10, media);
    float DP = DePe(var);
    printf("%.2f %.2f %.2f", media, var, DP);
    return 0;
}

