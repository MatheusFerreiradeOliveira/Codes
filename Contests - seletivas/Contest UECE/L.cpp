#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a + b) > c && (b + c) > a && (a + c) > b)
        printf("Sim");
    else
        printf("Nao");
    return 0;
}

