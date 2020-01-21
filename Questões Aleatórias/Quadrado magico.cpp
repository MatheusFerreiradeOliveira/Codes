#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int matriz[n][n];
    bool deucerto =  true;
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            cin>>matriz[i][j];
        }
    }
    int resp[n];
    for(int i = 0; i < n-1; i++)
    {
        resp[i] = 0;
    }
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            resp[i]+=matriz[i][j];
            cout<<resp[i]<<endl;
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        if(resp[i] != resp[i+1])
            deucerto = false;
    }
    for(int i = 0; i < n-1; i++)
    {
        resp[i] = 0;
    }
    //
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            resp[i]+=matriz[j][i];
            cout<<resp[i]<<endl;
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        if(resp[i] != resp[i+1])
            deucerto = false;
    }
    if(deucerto)
        cout<<resp[0]<<endl;
    else
        cout<<"???"<<endl;
    for(int i = 0; i < n-1; i++)
    {
        resp[i] = 0;
    }

}
