#include <bits/stdc++.h>
using namespace std;

const int MAX = 1010;
vector<int> adj[MAX];
int qt;
vector<int> lul;
int visit[MAX];
bool morreu[MAX];

void dfs(int i) {

    visit[i] = 1;

    if(!morreu[i]) qt++;

    for(x : adj[i]) {
        if(visit[x] == 1) continue;
        dfs(x);
    }

}

int main() {

    memset(visit, -1, sizeof visit);
    memset(morreu, false, sizeof morreu);

    int n, m;

    cin>>n>>m;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q;
    cin>>q;

    for(int k = 0; k < q; k++) {
        int a;
        cin>>a;
        morreu[a] = true;
    }

    int nf = 0;

    for(int i = 1; i <= n; i++) {
        if(visit[i] != 1) {
            qt = 0;
            dfs(i);
            if(qt > 0) lul.push_back(qt);
            if(qt > 0) nf++;
        }
    }

    sort(lul.begin(), lul.end());

    cout<<"Quantidade de familias: "<<nf<<endl;
    cout<<"Numero de habitantes em cada: ";
    //cout<<"lul.size() == "<<lul.size()<<endl;

    if(lul.size() == 1) {
        cout<<lul[0]<<endl;
    }

    else if(lul.size() == 2) {
        cout<<lul[0]<<" e "<<lul[1]<<endl;
    }

    else {
        for(int j = 0; j  < lul.size(); j++){
            if(j < (lul.size() - 2))
                cout<<lul[j]<<", ";
            else if(j == (lul.size() - 2))
                cout<<lul[j]<<" e ";
            else
                cout<<lul[j]<<endl;
        }
    }
}


