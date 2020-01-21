#include<bits/stdc++.h>
using namespace std;
void shift_string(char* str)
{
    for(int i =0; str[i] != '\0'; i++)
    {
        if(str[i] == 'z')
            str[i] = 'a';
        else if(str[i] == 'Z')
            str[i] = 'A';
        else if((str[i] >= 'a' and str[i] <= 'z') or (str[i] >= 'A' and str[i] <= 'Z') )
            str[i]++;
    }
    for(int i =0; str[i] != '\0'; i++)
    {
        cout<<str[i];
    }
}
int main()
{
    char nome[80];
    cin.get(nome, 80);
    shift_string(nome);
    return 0;
}
