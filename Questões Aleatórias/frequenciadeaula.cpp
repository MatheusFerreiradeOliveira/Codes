#include <bits/stdc++.h>
using namespace std;
bool compara(int a, int b){
    return a > b;
}
int main(){
    vector<int>v;
    int davez;
    while(1){
        cin>>davez;

        if(davez==0) break;

        v.push_back(davez);
    }
    sort(v.begin(), v.end(), compara);
    cout<<v.front()<<endl;
}
