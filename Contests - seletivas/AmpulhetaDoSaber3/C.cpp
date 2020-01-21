#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;

    cin>>s;

    int i;

    cin>>i;

    if(i == 1){
        if((s[s.size()-1] == '1' || s[s.size()-1] == '2'))
            cout<<"MULTADO"<<endl;
        else
            cout<<"NAO MULTADO"<<endl;
    }
    else if(i == 2){
        if((s[s.size()-1] == '3' || s[s.size()-1] == '4'))
            cout<<"MULTADO"<<endl;
        else
            cout<<"NAO MULTADO"<<endl;
    }
    else if(i == 3){
        if((s[s.size()-1] == '5' || s[s.size()-1] == '6'))
            cout<<"MULTADO"<<endl;
        else
            cout<<"NAO MULTADO"<<endl;
    }
    else if(i == 4){
        if((s[s.size()-1] == '7' || s[s.size()-1] == '8'))
            cout<<"MULTADO"<<endl;
        else
            cout<<"NAO MULTADO"<<endl;
    }
    else if(i == 5){
        if((s[s.size()-1] == '9' || s[s.size()-1] == '0'))
            cout<<"MULTADO"<<endl;
        else
            cout<<"NAO MULTADO"<<endl;
    }

}
