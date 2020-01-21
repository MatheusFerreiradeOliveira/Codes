#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    stack<char>p;
    bool deucerto = true;
    while(n--){
        string davez;
        getline(cin, davez);
        for(int i = 0; i < davez.size();i++){
            if(davez[i] != '{' && davez[i] != '}')
                continue;
            else{
                if(davez[i] == '{')
                    p.push(davez[i]);
                else {
                        if(p.empty()){
                            deucerto = false;
                            break;
                        }
                        else
                            p.pop();
                }
            }
        }
    }
    if(deucerto && p.empty())
            cout<<"S"<<endl;
    else
            cout<<"N"<<endl;
    return 0;
}

