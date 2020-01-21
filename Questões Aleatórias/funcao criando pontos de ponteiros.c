#include <stdio.h>
#include <math.h>
typedef struct ponto
{
    float x;
    float y;
}PONTO;

float calcdist(PONTO *A, PONTO *B)
{
    float distancia;
    distancia = sqrt(pow(B->x - A->x , 2) + pow(B->y - A->y, 2));
    return distancia;
}

PONTO *new_point(float A, float B)
{
    PONTO *aux = (float*)malloc(sizeof(PONTO)*1);
    aux->x = A;
    aux->y = B;
    return aux;
}

PONTO *mid_point(PONTO *A, PONTO*B)
{
    PONTO *aux = new_point(0.0, 0.0);
    aux->x = (A->x + B->x)/2;
    aux ->y = (A->y + B->y)/2;
    return aux;
}
int main()
{
    PONTO *p1,*p2;
    p1 = new_point(1.0, 2.0);
    p2 = new_point(5.0, 5.0);
    //Nao pode ser
    float b = calcdist(p1, p2);
    printf("%0.2f ", b);
    PONTO *p3;
    p3 = mid_point(p1, p2);
    printf("%0.2f %0.2f", p3->x, p3->y);
}

