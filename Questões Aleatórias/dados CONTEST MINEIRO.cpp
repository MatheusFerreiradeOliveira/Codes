#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int a;
    int lul[7];

    memset(lul, 0, 4*7);

    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        lul[a]++;
    }

    int movimentos[7];

    memset(movimentos, 0, 4*7);

    movimentos[0] = -1;
    int menormov = 1000000;

    for(int i = 1; i < 7; i++){
        if(lul[i] != 0){
            for(int j = 1; j < 7; j++){
                if(i != j && i + j != 7)
                    movimentos[i] += lul[j];
                else if (i != j)
                    movimentos[i] += 2*lul[j];
            }
        }
        else
            movimentos[i] = -1;
        if(movimentos[i] != -1 && movimentos[i] < menormov)
            menormov = movimentos[i];
    }
    printf("%d\n", menormov);

}

