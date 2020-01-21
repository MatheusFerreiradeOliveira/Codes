#include <bits/stdc++.h>
using namespace std;
int main()
{
    string entrada1;
    getline(cin, entrada1);
    char vogais[entrada1.size()];
    bool deucerto = true;

    memset(vogais, 0, entrada1.size());

    int j = 0;
    for(int i = 0; i < entrada1.size(); i++){
        if(entrada1[i] == 'a' || entrada1[i] == 'e' || entrada1[i] == 'i' || entrada1[i] == 'o' || entrada1[i] == 'u')
        {
            vogais[j] = entrada1[i];
            j++;
        }
    }

    for(int i = 0; i < j; i++){
        if(vogais[i] != vogais[j-1-i])
            deucerto = false;
    }
    if(deucerto)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}

