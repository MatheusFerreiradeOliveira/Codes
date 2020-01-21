#include <stdio.h>
typedef struct quad
{
    float lado;
}Quad;
typedef struct ret{
    float lado1, lado2;
}ret;
float area_q(void *info){
    Quad *L = (Quad *)info;
    float A = L->lado;
    return A*A;
}

//void info aceita + de 1 valor;
float area_r(void *info){
    ret *L = (ret *)info;
    float A = L->lado1;
    float B = L->lado2;
    return A*B;
}
int main(){
    float (*area)(void *);//callback
    Quad q1;
    q1.lado = 4;

    ret r1;
    r1.lado1 = 5;
    r1.lado2 = 6;

    area = area_q;//area agorea aponta para função area_q
    printf("Area quadrado = %.2f\n", area(&q1));

    area = area_r;//area agorea aponta para função area_r
    printf("Area retangulo = %.2f", area(&r1));

    return 0;
}
