#include <bits/stdc++.h>
using namespace std;
#define MAX 5000
pair<int, int> a[MAX];
int main(){
    int p, s;
    cin>>p>>s;
    for(int i = 0; i < s; i++){
        cin>>a[i].first>>a[i].second;
    }
    int primeiro, segundo;
    primeiro = a[0].first;
    segundo = a[0].second;
    for(int i = 0; i < s;i++){
        if(segundo > a[i].second)
            continue;
        if(segundo >= a[i].first && segundo < a[i].second){
            segundo = a[i].second;
        }
        if(i == s-1 || (segundo < a[i+1].second && segundo < a[i+1].first)){
            cout<<primeiro<<" "<<segundo<<endl;
            if(i < s-1){
                primeiro = a[i+1].first;
                segundo = a[i+1].second;
            }
        }
    }
    return 0;
}
