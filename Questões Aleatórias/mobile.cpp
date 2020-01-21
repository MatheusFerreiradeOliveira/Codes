#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

int n;
vector<int> adj[MAX];
int seen[MAX];
bool deucerto = true;

int dfs(int v) {

    seen[v] = 1;

    int ans = 1;

    int comp = -1;

    for(int x : adj[v]) {

        if(seen[x] != 0) continue;

        int lul = dfs(x);

        if(comp == -1) comp = lul;

        else if(comp != lul) {
            deucerto = false;
            break;
        }

        ans += lul;
    }

    //cout<<"visitou o "<<v<<" e retornou "<<ans<<endl;

    return ans;

}

int main() {

    memset(seen, 0, sizeof seen);

    cin>>n;

    for(int i = 1; i <=n; i++) {
        int a, b;
        cin>>a>>b;
        adj[b].push_back(a);
    }

    dfs(0);

    if(deucerto) {
        cout<<"bem"<<endl;
    }
    else {
        cout<<"mal"<<endl;
    }

}
