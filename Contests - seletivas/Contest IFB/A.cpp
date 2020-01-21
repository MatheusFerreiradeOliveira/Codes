#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;

    for(int i = 0; i < n; i++) {

        int saida = 0;
        cin>>s;

        //cout<<s.size()<<endl;
        bool deucerto = true;
        //int mds = s.size();

        //while(mds--){
            for(int j = s.size()-1; j >= 0; j--){


                saida += ((s[j]-48) * pow(10, s.size() - (j + 1)));

                if(pow(10, s.size() - (j + 1)) == 100) saida++;

                //cout<<s[j]-48<<pow(10, s.size() - (1 + j))<<endl;
                //cout<<saida + 2<<endl;
                //cout<<"Saida: "<<saida<<endl;
                for(int i = 2; i < sqrt(saida); i++) {
                    if(saida%i == 0) deucerto = false;
                }
            }
        //}

        if(deucerto) cout<<"S"<<endl;

        else cout<<"N"<<endl;

    }


}
