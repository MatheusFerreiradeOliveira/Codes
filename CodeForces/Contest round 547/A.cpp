#include <bits/stdc++.h>
using namespace std;

int main() {

    long long a = 0, b = 0;

    cin>>a>>b;

    int saida = 0;

    if(b%a != 0) cout<<-1<<endl;

    else {
        while(b > a) {

            if(b%3 != 0 && b%2 != 0 && ((b/3)%a) != 0 && ((b/2)%a) != 0) break;

            if( b%2 == 0 &&(b/2)%a == 0)
                b /= 2;
            else if(b%3 == 0 && (b/3)%a == 0)
                b /= 3;
            else
                break;

            saida++;
        }
        if(a != b)
            cout<<-1<<endl;
        else
            cout<<saida<<endl;
    }


}
