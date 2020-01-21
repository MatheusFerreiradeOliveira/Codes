#include <bits/stdc++.h>
using namespace std;

int fatorial(int n){
    if(n == 1 || n == 0)
        return 1;
    return n * fatorial(n-1);
}

int main(){
    int n, m;
    cin>>n>>m;
    cout<<fatorial(min(m, n))<<endl;
}


