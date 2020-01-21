#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

int bb(int i) {
    int ini = 0;
    int fim = dq.size() - 1;
    int ans = 0;
    while(ini <= fim) {
        int meio = (ini+fim)/2;
        if(dq[meio] <= i) {
            ans = meio;
            fim = meio - 1;
        }
        else {
            ini = meio + 1;
        }
    }
    return ans;
}

int main() {
    int n;

    cin>>n;

    for(int i = 0; i < n; i++) {
        char a;
        int b;
        cin>>a>>b;
        if(a == 'L') dq.push_front(b);
        else if(a == 'R') dq.push_back(b);
        else {
            int aux = bb(b);
            aux++;
            //cout<<aux<<endl;
            int mds = dq.size();
            cout<<min(mds - aux, aux)<<endl;
        }
    }
}
