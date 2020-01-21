#include <bits/stdc++.h>
#define MAX1 1010
#define MAX2 10010
using namespace std;

struct Competidor {
    int custo, pont;
    string cidade;
};

int main () {

    map <string, int> mp;

    mp["a"]++;

    map <string, int> aux1 = mp;
    map <string, int> aux2 = mp;

    aux1["a"]++;

    cout<<aux1["a"]<<endl;
    cout<<aux2["a"]<<endl;

}







