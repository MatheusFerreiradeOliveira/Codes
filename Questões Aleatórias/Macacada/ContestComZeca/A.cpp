#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    while(cin>>s){

        deque<int> lol;

        lol.push_back(1);

        for(int i = 0; i < s.size(); ++i) {

            if(abs(s[i] - lol.back()) == 32) {
                //lul.pop();
                lol.pop_back();
            }
            else {
                //lul.push(s[i]);
                lol.push_back(s[i]);
            }
        }

        if(lol.size() == 1) printf("Vazia\n");

        else {

            lol.pop_front();

            for(int i = 0; i < lol.size(); ++i) {
                cout<<char(lol[i]);
            }
            cout<<"\n";

        }
    }
}
