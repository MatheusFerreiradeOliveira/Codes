#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while (k != 0)
    {
        int  n, m, x, y;
        if(k>0){
            cin>>n>>m;
            while(k>0)
            {
                cin>>x>>y;
                if(x == n || y == m)
                    cout<<"divisa"<<endl;
                else if(x > n && y < m)
                    cout<<"SE"<<endl;
                else if(x > n && y > m)
                    cout<<"NE"<<endl;
                else if(x < n && y < m)
                    cout<<"SO"<<endl;
                else if(x < n && y > m)
                    cout<<"NO"<<endl;
                k--;
            }
        }
        cin>>k;
    }
}
