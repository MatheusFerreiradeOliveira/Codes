#include <bits/stdc++.h>
using namespace std;


int main() {

    int p[] = {1 ,0 , 0, 1, 0, 0 , 1};
    int c[] = {0 ,1 , 0, 0, 0, 1 , 0};
    int g[] = {0 ,0 , 1, 0, 1, 0 , 0};

    int a, b, d;

    cin>>a>>b>>d;

    int saidaG = 0, saida = 0, bonus = 0;

    if(a > 3 && b > 2 && d > 2) {
        bonus += min(a/3, min(b/2, d/2));
        a -= (3 * bonus);
        b -= (2 * bonus);
        d -= (2 * bonus);
    }

    //cout<<a<<b<<d<<endl;

    for(int i = 0; i < 7; i++) {
        int a1 = a, b1 = b, d1 = d;
        saida = 0;
        for(int j = i; j < 7; j++) {

            //cout<<"Dia "<<j<<endl;

            if((j == 0 || j == 3 || j == 6) && a1 <= 0) break;
            if((j == 1 || j == 5) && b1 <= 0) break;
            if((j == 2 || j == 4) && d1 <= 0) break;

            saida++;

            a1 -= p[j];
            b1 -= c[j];
            d1 -= g[j];

            if(j >= 6) j = -1;

        }

        //cout<<saida<<endl;

        saidaG = max(saidaG, saida);
    }

    bonus *= 7;

    cout<<saidaG + bonus<<endl;

}
