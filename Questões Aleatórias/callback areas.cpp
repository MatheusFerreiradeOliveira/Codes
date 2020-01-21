#include <stdio.h>
#define pi 3.1415
typedef struct quad
{
    float lado;
}Quad;

typedef struct ret{
    float lado1, lado2;
}ret;

typedef struct t{
    float altura, base;
}tri;

typedef struct c{
    float raio;
}cir;

float area_q(void *info){
    Quad *L = (Quad *)info;
    float A = L->lado;
    return A*A;
}
float area_t(void *info){
    tri *L = (tri *)info;
    return (L->altura*L->base)/2;
}
//void info aceita + de 1 valor;
float area_r(void *info){
    ret *L = (ret *)info;
    float A = L->lado1;
    float B = L->lado2;
    return A*B;
}
float circulo(void *info){
    cir *L = (cir *)info;
    return (L->raio*L->raio*pi);
}
int main(){
    float (*area)(void *);//callback
    Quad q1;
    q1.lado = 4;

    ret r1;
    r1.lado1 = 5;
    r1.lado2 = 6;

    tri t1;
    t1.altura = 4;
    t1.base = 3;

    cir c1;
    c1.raio = 4;

    area = area_q;//area agorea aponta para função area_q
    printf("Area quadrado = %.2f\n", area(&q1));

    area = area_r;//area agorea aponta para função area_r
    printf("Area retangulo = %.2f\n", area(&r1));

    area = area_t;
    printf("Area triangulo = %.2f\n", area(&t1));

    area = circulo;
    printf("Area circulo = %.2f\n", area(&c1));
    return 0;
}
