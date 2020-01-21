#include <bits/stdc++.h>
using namespace std;
int main()
{

    int v, daA, tA, daB, tB, HP;
    cin>>v;
    while(v > 0)
    {
        cin>>daA>>tA>>daB>>tB>>HP;
        bool acabou = false;
        HP-=daA;
        if(HP <= 0)
        {
            cout<<"Andre"<<endl;
            acabou = true;
        }
        else
        {
            HP-=daB;
            if(HP <= 0)
            {
                cout<<"Beto"<<endl;
                acabou = true;
            }
        }
        if(!acabou)
        {
            int contA = 0, contB = 0;
            while(HP > 0)
            {
                contA++;
                contB++;
                if(contA == tA)
                {
                    HP-=daA;
                    contA = 0;
                    if(HP <= 0)
                    {
                        cout<<"Andre"<<endl;
                        break;
                    }
                }
                if(contB == tB)
                {
                    HP-=daB;
                    contB = 0;
                    if(HP <= 0)
                    {
                        cout<<"Beto"<<endl;
                        break;
                    }
                }
            }
        }
        v--;
    }
    return 0;


}
