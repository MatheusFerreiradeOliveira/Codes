#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    while(n--) {
        unsigned long long k;

        cin>>k;

        int saida = 0;
        bool deucerto = true;

        while(k > 1) {
            if(k%2 == 0)  {
                k /= 2;
                saida++;
            }
            else if(k%3 == 0) {
                saida++;
                k /= 3;
                k *= 2;
            }
            else if(k % 5 == 0) {
                saida++;
                k /= 5;
                k *= 4;
            }
            else {
                deucerto = false;
                break;
            }
        }

        if(deucerto)
            cout<<saida<<endl;
        else
            cout<<-1<<endl;
    }

}

