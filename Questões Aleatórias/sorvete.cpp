#include <bits/stdc++.h>
using namespace std;
#define MAX 5010
pair<int, int> a[MAX];
int main(){
    int p, s;
    cin>>p>>s;
    for(int i = 0; i < s; i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a, a+s);
    int primeiro, segundo;
    primeiro = a[0].first;
    segundo = a[0].second;
    for(int i = 0; i < s;i++){
        if(i < s-1 && segundo > a[i+1].second )
            continue;
        if((i < s-1) && (segundo >= a[i+1].first && segundo < a[i+1].second))
            segundo = a[i+1].second;
        if(i == s-1 || segundo < a[i+1].first){
            cout<<primeiro<<" "<<segundo<<endl;
            if(i < s-1){
                primeiro = a[i+1].first;
                segundo = a[i+1].second;
            }
        }
    }
    cout<<endl;
    return 0;
}
