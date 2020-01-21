#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin>>n;

    pair<int, int> lul[n];

    for(int i = 0; i < n; i++) {
        cin>>lul[i].first>>lul[i].second;
    }

    sort(lul, lul+n);

    int x = 0, maior = 0;

    if(n == 1) x = lul[0].second - lul[0].first;

    for(int i = 1; i < n; i++) {

        if(lul[i].first >= lul[i-1].first && lul[i].second <= lul[i-1].second){
            x = min(x, lul[i-1].second - lul[i].first);
        }

        else
            x = max(x, max(lul[i].second - lul[i].first, lul[i-1].second - lul[i-1].first));



    }

    cout<<x<<endl;
}
