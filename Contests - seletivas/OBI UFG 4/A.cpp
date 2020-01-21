#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int hor = 420;
    int saida= 0;

    for(int i = 0; i < n; i++) {
        int a, b, c;

        cin>>a>>b>>c;

        if(a*60 + b + c < hor) {
            saida++;
            hor+=30;
        }

        else if(a*60 + b + c == hor) {
            hor += 30;
        }

        else {
            if(b <= 30) hor = a*60 + 30;
            else hor = a*60 + 60;
        }
    }

    cout<<saida<<endl;

}
