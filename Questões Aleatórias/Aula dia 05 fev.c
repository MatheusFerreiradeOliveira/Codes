#include <stdio.h>
#include <math.h>
typedef struct ponto
{
    float x ;
    float y;
}PONTO;

float calcdist(PONTO *A, PONTO *B)
{
    float distancia;
    distancia = sqrt(pow(B->x - A->x , 2) + pow(B->y - A->y, 2));
    return distancia;
}
int main()
{
    PONTO p1,p2;
    p1.x = 0.0;
    p1.y = 1.0;
    p2.x = 2.0;
    p2.y = 3.0;
    float b = calcdist(&p1, &p2);
    printf("%f", b);
}
