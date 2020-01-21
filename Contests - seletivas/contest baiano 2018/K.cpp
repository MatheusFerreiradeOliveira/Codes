#include <bits/stdc++.h>
    using namespace std;
    const int MAX= 3e6+10;
    vector<pair<int,int>> intervalos;
    pair<int,int> dias[MAX];
    int n;

    int main(){
        cin>>n;
        pair<int,int> tam;
        int cont=0, j=0;
        for(int i=0;i<n;i++){
            cin>>dias[i].first>>dias[i].second;
        }
        tam.first=dias[0].first;
        tam.second=dias[0].second;
        for(int i=1;i<n;i++){
            if(min(tam.second, dias[i].second)>=max(tam.first,dias[i].first)){
                tam.first=max(tam.first,dias[i].first);
                tam.second=min(tam.second, dias[i].second);
            }else{
                intervalos.push_back({tam.first,tam.second});
                j++;
                tam.first=dias[i].first;
                tam.second=dias[i].second;
            }
        }
        intervalos.push_back({tam.first,tam.second});
        //cout<<j<<endl;
        long long ans=0;
        for(int i=1;i<=j;i++){
            if(intervalos[i].first>intervalos[i-1].second)
                cont=abs(intervalos[i].first-intervalos[i-1].second);
            else if(intervalos[i].second<intervalos[i-1].first)
                cont=abs(intervalos[i-1].first-intervalos[i].second);
            ans=max(ans,cont);
        }
        cout<<ans<<endl;

    return 0;
    }
