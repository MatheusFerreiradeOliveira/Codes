#include <bits/stdc++.h>
using namespace std;

int cont (int x) {

    int ans = 0;

    int aux = 1;

    while(x > 0) {

        int a = x%10;

        x /= 10;

        if(a == 1) ans += 2;
        else if(a == 2 || a == 3 || a == 5) ans += 5;
        else if(a == 0 || a == 6 || a == 9) ans += 6;
        else if(a == 4) ans += 4;
        else if(a == 8) ans += 7;
        else ans += 3;
        aux++;
    }

    return ans;
}

int main() {

    int a, b;

    int saida = 0;

    cin>>a>>b;

    for(int i = a; i <= b; ++i) {
        saida += cont(i);
    }

    cout<<saida<<endl;

}
