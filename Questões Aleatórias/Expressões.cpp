#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        stack<char>p;
        char davez[10010];
        scanf("%s", davez);
        for(int i = 0; i < davez.size();i++){
            if(davez[i] == '(' || davez[i] == '{' || davez[i] == '[')
                p.push(davez[i]);
            else {
                    if(davez[i] == ')'){
                        if(p.empty() || p.top() != '('){
                            deucerto = false;
                            break;
                        }
                        else
                            p.pop();
                    }
                    else if(davez[i] == ']'){
                        if(p.empty() || p.top() != '['){
                            deucerto = false;
                            break;
                        }
                        else
                            p.pop();
                    }
                    else if(davez[i] == '}'){
                        if(p.empty() || p.top() != '{'){
                            deucerto = false;
                            break;
                        }
                        else
                            p.pop();
                    }
            }
        }
        if(deucerto && p.empty())
                cout<<"S"<<endl;
        else
                cout<<"N"<<endl;
    }
    return 0;
}

