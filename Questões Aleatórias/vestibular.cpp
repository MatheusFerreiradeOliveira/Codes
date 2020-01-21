#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    string entrada1, entrada2;
    getline(cin, entrada1);
    getline(cin, entrada2);
    int cont = 0;
    for(int i = 0; i < n; i++){
            if(entrada1[i] == entrada2[i])
                cont++;
    }
    cout<<cont<<endl;
}
