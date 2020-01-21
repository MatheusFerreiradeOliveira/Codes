#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l ,c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min((k*l)/(nl*n), min((c*d)/n, p/(n*np)))<<endl;
}
