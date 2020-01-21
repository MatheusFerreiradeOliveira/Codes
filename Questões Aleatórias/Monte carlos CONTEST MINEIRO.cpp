#include <bits/stdc++.h>
using namespace std;

struct monte{
    int distancia;
    int tonalidade;
};

bool compara(monte a, monte b)
{
    return a.distancia < b.distancia;
}
int main()
{
    int j;
    scanf("%d", &j);
    monte n[j];
    for(int i = 0; i < j; i++)
    {
        cin>>n[i].distancia>>n[i].tonalidade;
    }
    sort(n, n+j, compara);
    bool deucerto = true;
    for(int i = 0; i < j-1; i++)
    {
        if(n[i].tonalidade < n[i+1].tonalidade)
        {
            deucerto = false;
            break;
        }
    }
    if(deucerto)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

}


