#include <bits/stdc++.h>
#define MAX 300
using namespace std;

int main() {

    int n;

    cin>>n;

    priority_queue <int> par;
    priority_queue <int> impar;

    int a;

    for(int i = 0; i < n; i++) {
        cin>>a;
        if(a%2==0)
            par.push(a);
        else
            impar.push(a);
    }

    if(par.size() > impar.size()){
        par.pop();
        for(int i = 0; i < impar.size(); i++) {
            par.pop();
        }

        long long sum = 0;

        for(int x = par.top(); !par.empty(); x = par.top()){
            sum += x;
            par.pop();
        }

        cout<<sum<<endl;
    }
    else if(par.size() < impar.size()){
        impar.pop();
        for(int i = 0; i < par.size(); i++) {
            impar.pop();
        }

        long long sum = 0;

        for(int x = impar.top(); !impar.empty(); x = impar.top()){
            sum += x;
            impar.pop();
        }

        cout<<sum<<endl;
    }
    else {
        cout<<0<<endl;
    }
}

