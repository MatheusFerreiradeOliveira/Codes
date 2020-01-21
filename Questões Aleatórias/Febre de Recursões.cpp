#include <bits/stdc++.h>
using namespace std;
#define MAX 1010
long long f[MAX];
int a[MAX];
 int n, k, m;

long long fun (int k){
    if(f[k] != -1)
        return f[k];
    long long soma = 0;
    for(int i = 1; i<= n; i++){
        soma += a[i] * fun(k-i);
        //cout<<"soma = "<<soma<<" com k = "<<k<<endl;
        soma = soma%m;
    }
    f[k] = soma%m;
    return f[k];
}
int main(){
    memset(f, -1, sizeof(f));
    cin>>n>>k>>m;
    for(int i = 1; i <= n; i ++){
        cin>>a[i];
    }
    for(int i = 1; i <= n; i ++){
        cin>>f[i];
    }
    cout<<fun(k)%m<<endl;
}
