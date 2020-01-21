#include <bits/stdc++.h>
using namespace std;
int main(){
    string lul;
    while(getline(cin, lul)){
        bool correct = true;
        stack<char> p;
        for(int i =0; i < lul.size();i++){
            if(lul[i] == '(')
                p.push(lul[i]);
            else if(lul[i] == ')'){
                if(p.empty()){
                    correct = false;
                    break;
                }
                else
                    p.pop();
            }
        }
        if(p.empty() && correct)
            cout<<"correct"<<endl;
        else
            cout<<"incorrect"<<endl;
    }
    return 0;
}
