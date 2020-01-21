#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin>>a;

    int AA[a];

    set<int> v;

    for(int i = 0; i < a; ++i) {
        cin>>AA[i];
        v.insert(AA[i]);
    }

    cin>>b;

    int BB[b];

    for(int i = 0; i < b; ++i) {
        cin>>BB[i];
        v.insert(BB[i]);
    }

    int ansA, ansB;

    bool achou = false;

    for(int i = 0; i < a; ++i) {
        for(int j = 0; j < b; ++j) {
            if(v.count(AA[i] + BB[j]) == 0) {
                achou = true;
                ansA = AA[i];
                ansB = BB[j];
                break;
            }
        }
    }

    if(achou) cout<<ansA<<" "<<ansB<<"\n";

    else cout<<"\n";

}
