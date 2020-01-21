#include <bits/stdc++.h>
#define max 1000100
using namespace std;
int d[max];
vector<int>g[30];
int m[max];
int n;
int bfs(int v){
    d[v] = 0;
    queue<int> Q;
    Q.push(v);
    while(!Q.empty()){
        v = Q.front();
        Q.pop();
        for(int i = 0; i < n; i++){
            int u = v - m[i];
            if(d[u] == -1){
                d[u] = d[v]+1;
                Q.push(u);
            }
        }
    }
    return d[0];
}
int main(){
    int h;
    cin>>h;
    while(h--){
        memset(d, 0, sizeof(d));
        memset(m, 0, sizeof(d));
        int a, b;
        for(int y = 0; y < a; y++){
                cin>>m[y];
        }


    }

}
