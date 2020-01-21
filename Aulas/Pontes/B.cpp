
#include <bits/stdc++.h>
using namespace std;

int main() {

    int q;

    cin>>q;

    while(q--) {

        int n;

        cin>>n;

        set<long long int> runner;
        set<long long int> aux;

        for(int i = 0; i < n; ++i) {
            long long int a, b, c, d;
            cin>>a>>b>>c>>d;

            if(i == 0) {
                runner.insert(a*b);
                runner.insert(a*c);
                runner.insert(a*d);
                runner.insert(b*c);
                runner.insert(b*d);
                runner.insert(c*d);
            }
            else {
                if(runner.count(a*b) > 0) {
                    aux.insert(a*b);
                }
                if(runner.count(a*c) > 0) {
                    aux.insert(a*c);
                }
                if(runner.count(a*d) > 0) {
                    aux.insert(a*d);
                }
                if(runner.count(b*c) > 0) {
                    aux.insert(b*c);
                }
                if(runner.count(b*d) > 0) {
                    aux.insert(b*d);
                }
                if(runner.count(c*d) > 0) {
                    aux.insert(c*d);
                }
                runner.clear();
                runner = aux;
                aux.clear();
            }
        }

        if(!runner.empty()) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
}
