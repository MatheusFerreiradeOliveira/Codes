#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, davez, resp = 0;
    cin>>n;
    while(n > 0)
    {
        cin>>davez;
        resp += davez-1;
        n--;
    }
    cout<<resp<<endl;
}
