#include <bits/stdc++.h>
using namespace std;
int mdc (int a, int b){
    if(a < b) swap(a, b);
    if(b == 0) return a;
    return mdc(b, a%b);
}

int main(){
    int x, k;
    k = mdc(9, 6);
    cout<<k<<endl;
    x = mdc(k, 3);
    cout<<x<<endl;
    return 0;
}
