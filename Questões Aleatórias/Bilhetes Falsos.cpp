#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    while(n != 0 and m != 0)
    {
        int pessoas[10010], davez;
        for(int i =1; i <= n; i++)
        {
            pessoas[i] = 0;
        }
        for(int i =1; i <= m; i++)
        {
            cin>>davez;
            pessoas[davez]++;
        }
        int cont = 0;
        for(int j = 1; j<= n;j++)
        {
            if(pessoas[j] > 1)
            {
                cont ++;
            }
        }
        cout<<cont<<endl;
        cin>>n>>m;
    }
}
