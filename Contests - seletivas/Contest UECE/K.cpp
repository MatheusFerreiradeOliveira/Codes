#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    scanf("%I64d",&n);
    long long a, b, c, k;
    for(int i = 0; i < n; i++){
        scanf("%I64d %I64d %I64d %I64d",&a, &b, &c, &k);
        int saida = 1;
        a = a%(1000000007);
        b = b%(1000000007);
        c = c%(1000000007);
        k = k%(1000000007);
        k = (k*2)-1;
        k = k%(1000000007);
        if(k > 1){
            long long aux1 = a;
            long long aux2 = a;
            for(int j = 1; j <= k;){
                if(j*2 > k){
                    k -= j;
                    j = 1;
                    saida *= a;
                    a = aux2;
                    aux1 = aux2;
                }

                else if(j == k) {
                    saida = (saida%(1000000007) * aux2%(1000000007))%(1000000007);
                    j++;
                }

                else if(j*2 <= k){
                    a = (a%(1000000007) * aux1%(1000000007))%(1000000007);
                    aux1 = (aux1%(1000000007) * aux1%(1000000007))%(1000000007);
                    j*=2;
                }
            }
        }
        else saida = a;
        printf("%I64d\n", (saida%1000000007 * b%1000000007)%1000000007 * c % 1000000007)%(1000000007);
    }
    return 0;
}

