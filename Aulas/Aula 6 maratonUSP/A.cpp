#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    vector < int > adj[MAX];

    int a, b, c;

    for(int i = 0; i < m; i++){
        cin>>a>>b>>c;
        if(a == 0){
            bool deucerto = false;

            if(!adj[b].empty())
                for(vector<int>::iterator it = adj[b].begin(); it != adj[b].end(); it++){
                    if((*it) == c) deucerto = true;
                }

            if(deucerto) cout<<1<<endl;

            else cout<<0<<endl;
        }

        else {
            adj[b].push_back(c);
            adj[c].push_back(b);
        }
    }
}
