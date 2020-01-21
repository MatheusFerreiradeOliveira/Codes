#include <bits/stdc++.h>
using namespace std;
int** cria_matriz(int l, int c)
{
    int** matriz = (int**)malloc(sizeof(int*)*l);
    for(int i =0; i < l; i++)
    {
        matriz[i] = (int*)malloc(sizeof(int)*c);
    }
    return matriz;
}
int** Preenche_matriz(int** matrizz, int l, int c)
{
    int i, j;
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            matrizz[i][j] = i;
        }
    }
    return matrizz;
}
int** Inversa(int **matrizz, int l, int c)
{
    int **matriz = cria_matriz(3, 3);
    int i, j;
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            matriz[i][j] = matrizz[j][i];
        }
    }
    return matriz;
}
void Imprime_matriz(int** m1, int** m2, int l, int c)
{
    cout<<"Matriz normal: "<<endl;
    int i, j;
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matriz Transposta: "<<endl;
    int ii, jj;
    for(ii = 0; ii < c; ii++)
    {
        for(jj = 0; jj < l; jj++)
        {
            cout<<m2[ii][jj]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int **aux = cria_matriz(3, 3);
    int **Preenchida = Preenche_matriz(aux, 3, 3);
    int **aInversa = Inversa(Preenchida, 3, 3);
    Imprime_matriz(Preenchida, aInversa, 3, 3);

    return 0;

}
