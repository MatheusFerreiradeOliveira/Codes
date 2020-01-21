#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    bool deucerto = true;
    if((n%2 == 0 && n!= 2) || n == 1 || n == 0)
        deucerto = false;
    for(int i = 3; deucerto && i <= floor(sqrt(n)); i+=2){
        if((n%i) == 0){
            deucerto = false;
            break;
        }
    }
    if(deucerto)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}


