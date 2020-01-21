#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, davez;
    cin>>n;
    set<int> s;
    int resp = 0;
    for(int i = 0; i < n; i++){
		cin >> davez;
		if (s.count(davez)) s.erase(davez);
		else s.insert(davez), resp += 2;
    }
    cout<<resp<<endl;
    return 0;

}

