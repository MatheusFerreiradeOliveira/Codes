#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    stringstream ss;
    string s;
    cout<<s<<endl;

    cin>>n;

    s = "1";

    if(n == 1)
        cout<<"1"<<endl;

    else {
        int cont = 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < s.size() - 1; j++){
                while(s[j] == s[j+1]){
                    cont++;
                }
                ss << s << cont+48;
                s = ss.str();
            }
            cout<<s<<endl;
        }

    }

    return 0;
}






