#include <bits/stdc++.h>
#define MAX 200010
using namespace std;

int main() {

    vector<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    //vector<int>:: iterator it = a.begin();

    a.erase(*a[0]);

    for(auto x : a)
        cout<<x<<endl;
}


