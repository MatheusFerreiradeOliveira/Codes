#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    char c;
    cin>>n>>a>>c>>b;
    if(c == '+'){
        if(a+b <=n)
            cout<<"OK"<<endl;
        else
            cout<<"OVERFLOW"<<endl;
    }
    else{
        if(a*b <=n)
            cout<<"OK"<<endl;
        else
            cout<<"OVERFLOW"<<endl;
    }
    return 0;
}



