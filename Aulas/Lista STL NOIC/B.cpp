#include <bits/stdc++.h>
using namespace std;

bool compara(pair <string, int> a, pair <string, int> b) {
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main(){

    string davez;
    map<string, int> lul;
    map<string, int> saida;
    string runner1;
    string runner2;
    vector<string> wtf;

    while(getline(cin, davez)){

        if(davez == "0") break;

        if(davez == "1") {

            string atual;

            for(vector<string>::iterator it = wtf.begin(); it != wtf.end(); it++){

                cout<<"Examinando o :"<<(*it)<<endl;

                if((*it)[0] >= 'A' && (*it)[0] <= 'Z'){
                    atual = (*it);
                    //cout<<"Atual: "<<atual<<endl;
                    saida[atual] = 0;
                }

                else {
                    if(lul[(*it)] == 1)
                        saida[atual]++;
                }


            }

            //sort(saida.begin(), saida.end(), compara);

            for(map <string, int>::iterator it = saida.begin(); it != saida.end(); it++){
                cout<<(*it).first<<" "<<(*it).second<<endl;
            }

            map <string, int> lul;
            map <string, int> saida;
            vector<string> wtf;
            runner1 = "";
            runner2 = "";

        }
        else{
            wtf.push_back(davez);
            if(davez[0]>= 'A' && davez[0] <= 'Z'){
                lul[davez] = 0;
                runner1 = davez;
            }
            else
                if(runner1 != runner2 || lul[davez] == 0) {
                    lul[davez]++;
                    runner2 = runner1;
                }

                else if(runner1 != runner2 && lul[davez] == 1)
                    lul[davez]++;

            cout<<"Lul na posi davez: "<<lul[davez]<<endl;

        }
    }
}





