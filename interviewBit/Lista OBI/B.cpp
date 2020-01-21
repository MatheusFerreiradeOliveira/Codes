#include <bits/stdc++.h>
using namespace std;

struct Jog{
    string nome;
    int time, v;
};

bool compara(Jog a, Jog b) {
    return a.v > b.v;
}

bool compara2(Jog a, Jog b) {
    if (a.time != b.time)
        return a.time < b.time;
    return a.nome < b.nome;
}

int main() {

    int n, m;

    cin>>n>>m;

    Jog jog[n];

    for(int i = 0; i < n; i++) {
        cin>>jog[i].nome>>jog[i].v;
        jog[i].time = 0;
    }

    sort(jog, jog+n, compara);

    for(int i = 0, j = 1; i < n; i++, j++) {
        jog[i].time = j;
        if(j == m) j = 0;
    }

    sort(jog, jog+n, compara2);

    int j = 0;

    for(int i = 1; i <= m; i++) {
        cout<<"Time "<<i<<endl;
        while(jog[j].time == i){
            cout<<jog[j].nome<<endl;
            j++;
        }
        cout<<endl;
    }
}

