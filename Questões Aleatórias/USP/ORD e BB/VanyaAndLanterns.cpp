#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    cin>>n>>l;
    int vet[n];
    for(int i = 0; i < n; i++){
        cin>>vet[i];
    }
    double maiorDist = 0;
    sort(vet, vet+n);
    for(int i = 0; i < n-1; i++){
        if(vet[i+1] - vet[i] > maiorDist)
            maiorDist = vet[i+1] - vet[i];
    }
    maiorDist/=2;

    if(vet[0] - 0 > maiorDist) maiorDist = vet[0] - 0;
    if(l - vet[n-1] > maiorDist) maiorDist = l-vet[n-1];

    printf("%.10f", maiorDist);
    return 0;
}



