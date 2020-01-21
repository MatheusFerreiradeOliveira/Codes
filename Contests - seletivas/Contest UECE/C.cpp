#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    pair<int, int>lul[a];
    int soma[a];
    int davez;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &davez);
            lul[i].first += davez;
            lul[i].second = max(lul[i].second, davez);
        }
        soma[i] = max(lul[i].first, lul[i].second);
    }
    int resp = 0;
    for(int i = 0; i < a; i++){
        resp+=soma[i];
    }
    printf("%d\n", resp);
}

