#include <bits/stdc++.h.>
using namespace std;
int main(){
    int n;
    cin>>n;
    string lul;
    cin>>lul;
    int runner = 0;
    int saida = 0;
    for(int i = 0; i < lul.size(); i++){
        if(lul[i] == 'x') runner++;
        else {
            runner = 0;
        }
        if(runner == 3) {
                saida++;
                runner--;
        }
    }
    cout<<saida<<endl;

}

