#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a, b;

    cin>>n>>a>>b;

    for(int i = 0; i < n; i++) {
        int time;
        cin>>time;

        if(time < 45) {
            cout<<time<<" 1"<<endl;
        }
        else if(time >= 45+a && time < 90 + b){
            cout<<time-45<<" 2"<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }

}
