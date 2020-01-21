#include <stdio.h>
#include <math.h>
int main (){
int a,b;
double t(0);
scanf("%d %d", &a, &b);
    switch (a){
        case 1:
            t+=4.00*b;
        break;
        case 2:
            t+=4.50*b;
        break;
        case 3:
            t+=5.00*b;
        break;
        case 4:
            t+=2.00*b;
        break;
        case 5:
            t+=1.50*b;
        break;
    }
    printf("Total: R$ %.2d", t);
return 0;
}
