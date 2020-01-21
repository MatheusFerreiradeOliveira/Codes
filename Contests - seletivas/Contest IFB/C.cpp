#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    map<char, int> lul;

    for(int i = 0; i < s.size(); i++) {
        lul[s[i]]++;
    }

    bool deucerto = true;
    //cout<<deucerto<<endl;

    if(s.size()%2==0){
        for(map <char, int>::iterator it = lul.begin(); it != lul.end(); it++) {
            //cout<<lul[(*it).first]<<endl;
            if(lul[(*it).first]%2 != 0) deucerto = false;
        }
        //cout<<deucerto<<endl;
    }

    else {
        int solitarios = 0;
        for(map <char, int>::iterator it = lul.begin(); it != lul.end(); it++) {
            if(lul[(*it).first]%2 != 0 && solitarios < 2)
               solitarios++;
            if(solitarios >= 2)
                deucerto = false;
        }
    }

    if(deucerto) cout<<"Sim"<<endl;

    else cout<<"Nao"<<endl;


}

