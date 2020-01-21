#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    vector<int> zero;
    queue<int> um;

    int dist[n];

    memset(dist, -1, sizeof dist);

    int lul;

    for(int i = 0; i < n; i++) {
        cin>>lul;
        if(lul == 0){
            zero.push_back(i);
            dist[i] = 0;
        }
        else
            um.push(i);
    }

    while(!um.empty()) {
        int aux = um.front();
        um.pop();
        for(int j : zero) {
            if(dist[aux] == -1)
                dist[aux] = abs(j - aux);
            else if(dist[aux] > abs(j - aux))
                dist[aux] = abs(j - aux);
            else if(dist[aux] < abs(j - aux))
                break;
        }
    }

    for(int i = 0; i < n; i++){
        if(dist[i] >= 9) dist[i] = 9;
        cout<<dist[i]<<" ";
    }
    cout<<endl;
}
