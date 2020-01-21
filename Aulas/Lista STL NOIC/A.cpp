#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    getchar();

    int saiporra = 0;

    while(n--){

        map <string, int> lul;
        string davez;

        int quantidade = 0;
        while(getline(cin, davez)){

            if(davez == "") saiporra++;

            if(saiporra == 2) {
                saiporra = 1;
                break;
            }

            else if(davez != ""){
                lul[davez]++;
                //cout<<"davez :"<<davez<<endl;
                quantidade++;
            }
        }
        //cout<<quantidade<<endl;

        for(map <string, int>::iterator it = lul.begin(); it != lul.end(); it++){
            //cout<<100.0000 / it.second <<fixed()<<setprecision(4)
            //cout<<(*it).first<< " " << (*it).second << endl;
            cout<< fixed << setprecision(4) << (*it).first<< " " << ((double)100/quantidade)* (*it).second << endl;
        }
        if(n > 0) cout<<endl;
    }
}




