#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, m;
    double pago;

    //cout<<10.000000000000000000000000000000<<fixed<<setprecision(8)<<endl;

    cin>>n>>m>>pago;

    n -= (n * m / 100);

    pago *= 1000;

    pago /= n;

    printf("%.8f\n", pago);
    //cout<<(double)pago<<fixed<<setprecision(8)<<endl;

}


