#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, b, bM, a, aM;

    cin>>n>>b>>a;

    bM = b;
    aM = a;

    int vet[n];

    for(int i = 0; i < n; i ++) {
        cin>>vet[i];
    }

    int moves = 0;

    for(int i = 0; i < n; i++) {

        if(b <= 0 && a <= 0) break;

        if(vet[i] == 0) {

            if(a > 0)
                a--;
            else
                b--;
        }

        else {

            if(a == aM) a--;

            else if(b > 0){
                b--;
                if(a < aM) a++;
            }
            else
                a--;
        }

        moves++;
    }


    cout<<moves<<endl;
}
