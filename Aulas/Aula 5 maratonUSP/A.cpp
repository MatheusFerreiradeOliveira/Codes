#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string davez;


    while(n--){

        bool deuCerto = true;
        stack<char> lul;

        cin>>davez;

        for(int i = 0; i < davez.size() && deuCerto; i++){

            if(davez[i] == '(') lul.push(davez[i]);
            else if(davez[i] == ')'){
                //cout<<"entrou pra remover"<<endl;
                if(lul.empty() || lul.top() != '(')
                    deuCerto = false;
                else
                    lul.pop();
            }

            if(davez[i] == '{') lul.push(davez[i]);
            else if(davez[i] == '}'){
                //cout<<"entrou pra remover"<<endl;
                if(lul.empty() || lul.top() != '{')
                    deuCerto = false;
                else
                    lul.pop();
            }

            if(davez[i] == '[') lul.push(davez[i]);
            else if(davez[i] == ']'){
                //cout<<"entrou pra remover"<<endl;
                if(lul.empty() || lul.top() != '[')
                    deuCerto = false;
                else
                    lul.pop();
            }
        }

        if((!lul.empty()) || deuCerto ==  false){
            cout<<"N"<<endl;
        }
        else
            cout<<"S"<<endl;
    }
}
