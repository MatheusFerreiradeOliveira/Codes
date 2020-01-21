#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n;
    string entrada1;
    while(cin>>n>>entrada1 && (n != '0' && entrada1 != "0")){
        bool deubom = false;
        for(int i = 0; i < entrada1.size(); i++){
                if(entrada1[i] == n){
                    entrada1[i] = ' ';
                }
                else if(entrada1[i] != '0')
                    deubom = true;
        }

        for(int i = 0; deubom && i < entrada1.size(); i++){
            if(entrada1[i] != ' ')
                cout<<entrada1[i];
        }
        if(!deubom)
            cout<<0;
        cout<<endl;
    }
}

