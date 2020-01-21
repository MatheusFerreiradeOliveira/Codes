#include <bits/stdc++.h>
using namespace std;

struct Time{

    int id, p, t;

};

bool compara(Time a, Time b) {

    if(a.p != b.p)
        return a.p > b.p;

    return a.t < b.t;

}



int main() {

    int n, m;

    cin>>n>>m;

    Time times[n];

    for(int i = 0; i < n; i++) {
        cin>>times[i].id>>times[i].p>>times[i].t;
    }

    sort(times, times+n, compara);

    cout<<times[m-1].id<<endl;
}
