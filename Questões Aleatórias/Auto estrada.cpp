#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string lul;
    cin>>n;
    getchar();
    getline(cin, lul);

    int cont=0;
    for(int i=0; i < lul.size();i++){
        if(lul[i] == 'A')
            cont++;
        else if(lul[i] == 'C' || lul[i] == 'P')
            cont+=2;
    }
    cout<<cont<<endl;
    return 0;
}




