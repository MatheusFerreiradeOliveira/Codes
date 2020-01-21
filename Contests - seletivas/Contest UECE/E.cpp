#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    string a, b;
    cin>>a>>b;
    int vezes = 0, lul, comeco = -1, j = 0;
    //bool duplica = true;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[j]){
            //cout<<"i = "<<i<<" "<<a[i]<<" Igual a "<<b[j]<<endl;
            j++;
            if(j == b.size()){
                comeco = i+1;
                if(i+1 >= a.size()) comeco = 0;
                break;
            }
        }
        else{
            j = 0;
            //cout<<"i = "<<i<<" "<<a[i]<<" desigual"<<endl;
        }
        if((i == a.size()-1) && j!= 0) {
            i = -1;
            lul = j;
            vezes++;
            if(vezes > 1 && j == lul) break;
            //duplica = false;
        }
    }
    if(comeco != -1){
        for(int i = comeco; i < a.size(); i++){
            cout<<a[i];
        }
        for(int i = 0; i < comeco; i++){
            cout<<a[i];
        }
    }
    else
        cout<<"Impossivel";
    cout<<endl;
    return 0;
}


