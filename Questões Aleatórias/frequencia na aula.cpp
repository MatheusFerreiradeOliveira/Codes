#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> S; //Cria uma variável do tipo set para armazenar números inteiros

    int n, davez;
    cin>>n;
    for(int i = 0; i <n; i++){
        cin>>davez;
        S.insert(davez);
    }
    cout<<S.size()<<endl;
}
