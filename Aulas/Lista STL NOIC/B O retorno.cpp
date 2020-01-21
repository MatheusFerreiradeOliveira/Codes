#include <bits/stdc++.h>
using namespace std;

bool compara(pair <string, int> a, pair <string, int> b) {
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main(){

    string davez;
    //map<string, int> lul;
    //map<string, int> saida;
    vector<string> wtf;

    while(getline(cin, davez)){

        if(davez == "0") break;

        if(davez == "1") {

            string atual;
            set<string> aux;



            for(vector<string>::iterator it = wtf.begin(); it != wtf.end(); it++){



            }

        }
        else{
            wtf.push_back(davez);
        }
    }
}






