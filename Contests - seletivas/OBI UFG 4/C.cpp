#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;

    cin>>n>>k;

    vector<int> lul;

    for(int i = 0; i < n; i++) {
        int a;
        cin>>a;

        lul.push(a);
    }

    while(k > 0) {
        if(k == 1){
            lul.pop();
            k--;
        }
        else {
            int st = 0, sb = 0;

            stack<int> aux = lul;

            st += aux.top();
            aux.pop();
            st +=aux.top();



        }
    }





}


