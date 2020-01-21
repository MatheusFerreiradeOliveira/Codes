#include <bits/stdc++.h>
using namespace std;
long long int fatorial(long long unsigned n){

    if(n <= 3){
        return 1;
    }
    return (n%1000000009)*(fatorial(n-1)%1000000009);
}
int main(){
    long long unsigned n;
    cin>>n;
    while(n != 0){
        if(n ==3)
            cout<<1<<endl;
        else{
            long long unsigned resp = fatorial(n);
            cout<<resp%1000000009<<endl;
        }
        cin>>n;
    }
}

