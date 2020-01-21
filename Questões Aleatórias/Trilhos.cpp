#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

int main(){
    int n;
    int saida[MAX];
    saida[0] = 0;
    while(true){

        if(saida[0] == 0){
            cin>>n;
        }

        if(n == 0) break;

        memset(saida, 0, sizeof(saida));

        for(int i = 0; i < n; i++) {

            cin>>saida[i];

            if(saida[i] == 0) break;

            if(i == n-1){

                int cont  = 1;
                int atual = 0;
                bool deucerto = true;

                stack < int > runner;

                for(int j = 0; j < n; j++) {

                    cout<<"Atual: "<<atual<<endl;
                    if(cont == saida[atual]) {

                        cout<<"Achei o "<<cont<<endl;
                        atual++;
                        cont++;

                    }

                    else if(!runner.empty() && runner.top() == cont){
                        runner.pop();
                        cout<<"Retirei o "<<cont<<endl;
                        cont++;
                    }

                    else {
                        cout<<"empilhei o "<<saida[atual]<<endl;
                        runner.push(saida[atual]);
                        atual++;
                    }

                    if((j == n-1) && (atual != (n - 1) || (!runner.empty() || cont <= saida[n-1]))){
                        deucerto = false;
                    }
                }

                if(deucerto)
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }

        }
    }

}

