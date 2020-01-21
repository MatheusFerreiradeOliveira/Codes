#include <bits/stdc++.h>
using namespace std;

struct cliente{
    int id, c, s, tempo;
    char cook;
};

bool compara(cliente a, cliente b) {

    return (a.id < b.id);

}

bool compara2(cliente a, cliente b) {

    return (a.c < b.c);

}


int main() {

 int n, k;

 cin>>n>>k;

 cliente lul[n];

 for(int i = 0; i < n; i++) {
    cin>>lul[i].c>>lul[i].s;
    lul[i].id = i+1;
 }

 sort(lul, lul+n, compara2);

 int a = 0, b = 0;
 bool aOcup = false, bOcup = false;

 for(int i = 0; i < n; i++) {
    if(lul[i].c >= max(a, b)){
        a = lul[i].c + (lul[i].s);

        lul[i].cook = 'A';

        lul[i].tempo = a;
    }
    else {
        if(min(a, b) == b){
            b += (lul[i].s * k);
            lul[i].cook = 'B';
            lul[i].tempo = b;
        }

        else {
            a += lul[i].s;
            lul[i].cook = 'A';
            lul[i].tempo = a;
        }

    }
 }

 sort(lul, lul+n, compara);

 for(int i = 0; i < n; i++) {

    cout<<lul[i].cook<<" "<<lul[i].tempo<<endl;

 }


}

