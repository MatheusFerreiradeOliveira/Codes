#include <bits/stdc++.h>
using namespace std;
bool compara(int a, int b){
    return a >b;
}
int main(){
    int n;
    cin>>n;
    getchar();
    while(n>0){
        int m;
        cin>>m;
        int vet1[m], vet2[m], davez;
        int i = 0, j = m-1;
        for(int i = 0; i < m; i++){
            vet1[i] = 1001;
        }
        memset(vet2, 0, m*4);
        for(int u = 0; u < m; u++){
            cin>>davez;
            if(davez%2 ==1 ){
                vet1[i] = davez;
                vet2[j] = davez;
                i++;
                j--;
            }
        }
        sort(vet1, vet1+m);
        sort(vet2, vet2+m, compara);
        for(int u = 0; vet1[u] <= vet2[u] ; u++){
            cout<<vet2[u];
            if(vet2[u] != vet1[u])
                cout<<" "<<vet1[u];
            if(vet1[u+1] <= vet2[u+1])
                cout<<" ";
        }
        cout<<endl;
        n--;
    }
    return 0;
}
