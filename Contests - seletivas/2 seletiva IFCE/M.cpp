#include <bits/stdc++.h>
using namespace std;

int n;

int mat[MAX][MAX];
vector<int> adj[MAX];
bool deucerto = false;
int dist[MAX];
int seen[MAX];


/*void bfs(int v) {

    queue<int> lul;

    lul.push(v);

    dist[v] = 0;

    while(!lul.empty()) {
        int aux = lul.front();

        lul.pop();

        if(seen[aux] != 0) continue;

        seen[aux] = 1;

        for(int x : adj[aux]) {

            if(seen[x] != 0) continue;

            dist[x] = 1 + dist[aux];

            lul.push(x);



        }

    }

}
*/

int main() {

    memset(seen, 0, sizeof seen);
    memset(dist, 0, sizeof dist);

    cin>>n;

    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j++) {
            cin>>mat[i][j];
            if(mat[i][j] == 0) adj[i].push_back(j);
        }
    }

    for(int i = 0; i < n; i++) {
        if(adj[i].empty()){
            deucerto = true;
            break;
        }

        for(auto x : adj[i]) {
            dist[x] = 1 + dist[i];
        }


    }

    if(deucerto)
        cout<<"Bazinga!"<<endl;
    else
        cout<<"Fail!"<<endl;




}
