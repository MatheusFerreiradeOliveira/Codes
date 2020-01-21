#include <bits/stdc++.h>
#define MAX 200010
using namespace std;

int main() {

    int n;

    cin>>n;

    int vet[MAX];

    for(int i = 0; i < n; i++) {
        cin>>vet[i];
    }

    sort(vet, vet+n);

    set<int> inc;
    set<int> dec;

    int visit[MAX];

    memset(visit, 0, sizeof visit);

    for(int i = 0, j = n-1; i < n; i++, j--) {

        if(j < 0) j = n-1;

        if(visit[i] == 0 && inc.count(vet[i]) == 0){
            inc.insert(vet[i]);
            visit[i] = 1;
        }
        if(visit[j] == 0 && dec.count(vet[j]) == 0){
            dec.insert(vet[j]);
            visit[j] = 1;
        }

    }

    bool deucerto = true;

    for(int i = 0; i < n; i++) {
        //cout<<visit[i]<<endl;
        if(visit[i] == 0)
            deucerto = false;
    }

    if(deucerto){
        cout<<"YES"<<endl;
        cout<<inc.size()<<endl;
        if(inc.size() > 0) {
            for(int x : inc){
                cout<<x<<" ";
            }
        }
        cout<<endl;

        priority_queue<int>vetA;

        cout<<dec.size()<<endl;
        if(dec.size() > 0) {
            for(auto x : dec){
                vetA.push(x);
            }

            for(int g = vetA.top(); !vetA.empty(); g = vetA.top()){
                cout<<g<<" ";
                vetA.pop();
            }
        }
        cout<<endl;

    }
    else {
        cout<<"NO"<<endl;
    }




}

