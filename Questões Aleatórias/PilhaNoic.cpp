#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n != 0){
        stack <int> lul;
        int tester;
        bool deucerto1 = true;
        bool deucerto2 = true;

        for(int i = 0; i < n; i++){
            cin>>tester;
            if(tester==0){
                deucerto1 = false;
                break;
            }
            lul.push(tester);
        }


        if(deucerto1){
            for(int i;lul.size() > 1;){
                i = lul.top();
                lul.pop();
                if(max(i, lul.top()) - min(i, lul.top()) >= 2) {
                    deucerto2 = false;
                    break;
                }
            }
            if(deucerto2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

        if(!deucerto1) cin>>n;
    }
}
