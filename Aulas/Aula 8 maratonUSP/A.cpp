#include <bits/stdc++.h>
using namespace std;

long long int memo[70];

long long int fib(int x) {

    if(x == 0) return 0;

    if(x == 1) return 1;

    if(memo[x] != 0) return memo[x];

    return memo[x] = fib(x-1)+fib(x-2);

}


int main() {

    memset(memo, 0, sizeof(memo));

    int n, aux;

    cin>>n;

    while(n--) {

        cin>>aux;

        cout<<"Fib("<<aux<<") = "<<fib(aux)<<endl;

    }

}
