#include <bits/stdc++.h>
using namespace std ;

int main () {

    int n;

    cin >> n;

    while(n--) {

        int q;
        cin>>q;

        bool deucerto = true;

        if(q == 2) deucerto = true;

        else if(q <= 1 || q%2==0) deucerto = false;

        for(int i = 3; deucerto && i < sqrt(q); i+=2) {
            if(q%i == 0) {
                deucerto = false;
                break;
            }
        }

        if(!deucerto)
            cout<<"Not Prime"<<endl;
        else
            cout<<"Prime"<<endl;
    }
    return 0;
}
