#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    stack<int> saida;
    set<int> comp;

    while(n--) {
        int a, b;

        cin>>a;

        if(a == 1) {
            cin>>b;

            saida.push(b);
            comp.insert(-b);
        }
        else if(a == 2) {
            if(saida.top() == *comp.begin())
                comp.erase(*comp.begin());
            saida.pop();
        }

        else {
            cout<<-1 * (*comp.begin())<<endl;
        }
    }


}
