#include <bits/stdc++.h>
using namespace std;
int cont = 0;

int bubble_sort(int vet[], int n)
{
    for (int i=0; i < n ; i++ )
    {
        for (int j = 0; j < n-1-i; j++ )
        {
            if (vet[j] > vet[j+1])
            {
                swap(vet[j], vet[j+1]);
                cont++;
            }
        }
    }

}
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n > 0)
    {
        int c;
        cin>>c;
        int vet[c];
        for(int i = 0; i < c; i++)
        {
            cin>>vet[i];
        }
        bubble_sort(vet, n);
        for(int i = 0; i < c; i++)
        {
            cout<<vet[i]<<" ";
        }
        cout<< "Optimal train swapping takes "<<cont<<" swaps."<<endl;
        cont = 0;
        n--;
    }
}
