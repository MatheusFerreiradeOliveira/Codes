#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    while(n >0){
        string dieta, almoco, janta;
        int repetidas[150];
        getline(cin, dieta);
        getline(cin, almoco);
        getline(cin, janta);

        int h = dieta.size();
        char lul[h];
        memset(lul, '0', h);
        memset(repetidas, '0', 4*150);

        if(dieta == "" && almoco == "" && janta == "")
        {
            cout<<""<<endl;
        }
        else if(dieta != "" && (almoco == "" && janta == "")){
                for(int i = 0; i < dieta.size();i++) lul[i] = dieta[i];
                sort(lul, lul+h);
                for(int i = 0; i < dieta.size();i++) cout<<lul[i];
                cout<<endl;
        }
        else{
            bool deucerto1 = false, deucerto2 = false;

            for(int i = 0; i < dieta.size(); i++)
            {
                if(almoco != ""){
                    for(int j = 0; j < almoco.size(); j++){
                        if(dieta[i] == almoco[j]){
                            repetidas[dieta[i]]++;
                            dieta[i] = '1';
                            deucerto1 = true;
                        }
                    }
                }
                else
                    deucerto1 = true;
                if(janta != ""){
                    for(int k = 0; k < janta.size(); k++){
                        if(repetidas[dieta[i]] != 0){
                            deucerto2 = false;
                            break;
                        }
                        else if(dieta[i] == janta[k]){
                            dieta[i] = '1';
                            deucerto2 = true;
                        }
                    }
                }
                else
                    deucerto2 = true;
            }

            if(deucerto1 and deucerto2)
            {
                    for(int i = 0; i < dieta.size();i++){
                        if(dieta[i] != '1')
                            lul[i] = dieta[i];
                    }
            }
            sort(lul, lul+h);
            if(deucerto1 and deucerto2)
            {
                    for(int i = 0; i < dieta.size();i++){
                        if(lul[i] != '1' && lul[i] != '0')
                            cout<<lul[i];
                    }
                    cout<<endl;
            }
            else{
                cout<<"CHEATER"<<endl;
            }
        }
        n--;
    }
}
