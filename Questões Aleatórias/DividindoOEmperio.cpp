#include <bits/stdc++.h>
#define MAX 100010
using namespace std;

const int INF = 1e9 + 10;

vector< int > adj[MAX];
int corte = INF;
int seen[MAX];
int n;

int DFS(int v) {

    int ans = 1;

    seen[v] = 1;

    for(int x : adj[v]) {

        if(seen[x] != 0) continue;

        seen[x] = 1;

        int lul = DFS(x);

        corte = min(corte, abs(n - lul - lul));

        ans += lul;
    }

    return ans;
}


int main() {

    memset(seen, 0, sizeof seen);

    cin>>n;

    for(int i = 0; i < n-1; i++) {
        int a, b;

        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    DFS(1);

    cout<<corte<<endl;


}
