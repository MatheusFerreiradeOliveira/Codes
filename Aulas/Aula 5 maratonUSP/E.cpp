#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!= 0){

        int runner = 1;

        int vet[n];
        stack <int> rua;

        for(int i = 0; i < n; i++){
            cin>>vet[i];
        }

        bool deucerto =  true;

        for(int i = 0; i < n;){

            //cout<<"Contador: "<<runner<<endl;

            if(vet[i] == runner) {
                    runner++;
                    i++;
            }

            else if((!rua.empty() && rua.top() == runner)){
                runner++;
                //cout<<"Rua excluiu o "<<rua.top()<<endl;
                rua.pop();
            }

            else if(rua.empty() || vet[i] < rua.top()) {
                    rua.push(vet[i]);
                    i++;
                    //cout<<"Rua adicionou o "<<rua.top()<<endl;
            }

            else{
                deucerto = false;
                break;
            }

        }

        if(deucerto)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
}



