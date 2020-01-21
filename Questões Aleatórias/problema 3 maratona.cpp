#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int soma=0;
    for(auto d : s)
        {
            soma += d - '0';
        }
    cout<<(soma%3 == 0 ? "S" : "N")<<endl;
}
