#include <bits/stdc++.h>
using namespace std;
struct runners{
    int id, tempo = 0;
};
bool compara(runners a, runners b){
    return a.tempo < b.tempo;
}
int main(){
    int n, m;
    cin>>n>>m;
    runners runner[n];
    int davez;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin >> davez;
            runner[i].tempo+=davez;
            runner[i].id = i+1;
        }
    }
    sort(runner, runner+n, compara);
    cout<<runner[0].id<<endl;

    return 0;
}
