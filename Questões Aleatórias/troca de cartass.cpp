#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, davez;
    cin>>n>>m;
    set < int > Jog1;
    set< int > Jog2;

    for(int i = 0; i < n; i++){
        cin>>davez;
        Jog1.insert(davez);
    }
    for(int i = 0; i < m; i++){
        cin>>davez;
        Jog2.insert(davez);
    }
    int cont = 0;
    if(Jog1.size() < Jog2.size()){
        for(set<int>::iterator it = Jog1.begin(); it != Jog1.end();++it){
                if(Jog2.find(*it) == Jog2.end()){
                    cont++;
                    Jog2.insert(*it);
                }
        }
    }
    else{
        for(set<int>::iterator it = Jog2.begin(); it != Jog2.end();++it){
                if(Jog1.find(*it) == Jog1.end()){
                    cont++;
                    Jog1.insert(*it);
                }
        }
    }
    cout<<cont<<endl;
    return 0;

}
