#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m, x;
    cin>>n;
    int V[n];
    for(int i=0;i < n ; i++)
    {
        cin>>V[i];
	}
	cin>>m;
    for(int i=0;i < m; i++)
    {
        cin>>x;
        for(int j=0; j < n; j++)
        {
            if(V[j] == x)
            {
                V[j] = -1;
                break;
            }
        }
	}
    for(int i=0;i < n ; i++)
    {
        if(V[i] != -1)
            cout<<V[i]<<" ";
	}
	cout<<endl;
}
