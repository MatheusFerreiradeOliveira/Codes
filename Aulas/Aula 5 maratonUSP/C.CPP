#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    //map <char, int> lul;

    int saida = 0;

    if(s.size() < 2) cout<<"No"<<endl;

    else{

        stack <char> runner;

        for(int h = 0; h < s.size(); h++){
            if(!runner.empty() && s[h] == runner.top()){
                //cout<<"Removeu o "<<s[h]<<endl;
                saida++;
                runner.pop();
            }
            else if((s[h] != s[h+1]) && h < s.size()-1) {
                //cout<<"Adicionou o "<<s[h]<<endl;
                runner.push(s[h]);
            }
            else if(s[h] == s[h+1]) {
                saida++;
                h++;
            }
            //cout<<"Runner: "<<runner<<endl;
        }
        //cout<<"Saida: "<<saida<<endl;
        (saida%2 == 0) ? cout<<"No"<<endl : cout<<"Yes"<<endl;

    }
    return 0;
}

