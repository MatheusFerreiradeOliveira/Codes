#include <stdio.h>
using namespace std ;

bool comp [2147483648];

void crivo (int n ){
    comp [1] = 1;
    for ( int i = 2; i <= n ; ++ i ) {
        if (! comp[i]) {
            for (int j = 2; j * i <= n ; ++ j ) {
                comp[i*j] = 1;
            }
        }
    }
    return;
}

int main () {

    long long mds = 2147483648;

    crivo(mds);

    int n;

    cin >> n;

    while(n--) {

        int q;

        if(crivo[q] != 1)
            cout<<"Not prime"<<endl;
        else
            cout<<"Prime"<<endl;
    }
    return 0;
}

