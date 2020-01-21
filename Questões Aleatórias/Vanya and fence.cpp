#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char, int> m;
    for(int i = 0; i < n;i++){
        m[s[i]]++;
    }
    m['A'] >  m['D'] ? cout<<"Anton"<<endl : m['A'] == m['D'] ? cout<<"Friendship"<<endl :  cout<<"Danik"<<endl;
    //cout<<endl;

}
