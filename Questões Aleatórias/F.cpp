#include <bits/stdc++.h>
using namespace std;
int main(){
    int T, V, E;
    cin>>T;
    while(T--){
        cin>>V>>E;
        cout<<2 - (V-E)<<endl;
    }
    return 0;
}
