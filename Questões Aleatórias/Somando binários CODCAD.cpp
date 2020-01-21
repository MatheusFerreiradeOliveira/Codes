#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t1,t2, i= 0;
    cin>>t1>>t2;
    string primeiro, segundo, resposta;
    cin>>primeiro>>segundo;
    if(t1 > t2)
    {
        while(t1 > t2)
        {
            cout<<primeiro[t1-1];
            t1--;
        }
    }
    else if(t2 > t1)
    {
        while(t2 > t1)
        {
            cout<<segundo[t2-1];
            t2--;
        }
    }
    if(primeiro[t1-1] == segundo[t2-1])
    {
        if(primeiro[t1-1] == 1)
        {
            resposta[i]= "0";
        }

    }
    else
    {
        resposta[i]= "1";
        i++
    }

}
