#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int v[n];

    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    int x;

    cin>>x;

    int tam = 1 << n;

    bool deucerto = false;

    for(int mask = 0; mask < tam; mask++) {
        int s = 0;
        for(int i = 0; i < n; i++){
            if((1 << i) & mask) {
                s += v[i];
            }
        }

        //cout<<s<<endl;

        if(s == x){
            deucerto = true;
            //break;
        }
    }

    if(deucerto)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}


