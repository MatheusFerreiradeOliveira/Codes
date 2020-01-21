#include <bits/stdc++.h>
#define MAX 1010
using namespace std;


int n, m;
vector<pair<int, int>> adj[MAX];
int dist[MAX];
bool seen[MAX];


int main() {

    priority_queue<int> a;

    a.push(1);
    a.push(12);
    a.push(13);

    cout<<a.top()<<endl;
    a.pop();
    cout<<a.top()<<endl;

    //cout<<dist[n+1]<<endl;



}

