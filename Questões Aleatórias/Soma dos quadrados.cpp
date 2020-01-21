#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    while(cin>>n)
    {
        bool deucerto = false;
        for(int i=0; i <= 100; i++)
        {
            if(deucerto == false)
            {
                for(int j=0; j<=100; j++)
                {
                    if((i*i)+(j*j) == n){
                        cout<<"YES"<<endl;

                        deucerto = true;
                        break;
                    }
                }
            }
        }
        if(!deucerto)
            cout<<"NO"<<endl;
    }
    return 0;
}

