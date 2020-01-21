#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l, c, nc, nl;
    while(n!=0)
    {
        cin>>l>>c;
        nl = l/3;
        nc = c/3;
        cout<<nl*nc<<endl;
        n--;
    }
}
