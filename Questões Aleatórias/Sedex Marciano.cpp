#include <bits/stdc++.h>
using namespace std;
int main()
{
    double L, A, P, R;
    cin>>L>>A>>P>>R;
    if(L*L + A*A + P*P <= 4*R*R)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}







