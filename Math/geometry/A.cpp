#include <bits/stdc++.h>
using namespace std;

struct Retangulo {
    int x0, x1, y0, y1;
};

int main() {

    //int ax0, ax1, bx0, bx1, ay0, ay1, by0, by1;

    Retangulo r[2];

    cin>>r[0].x0>>r[0].y0>>r[0].x1>>r[0].y1;

    cin>>r[1].x0>>r[1].y0>>r[1].x1>>r[1].y1;

    Retangulo maior, menor;

    if(r[0].x0 > r[1].x0){
        maior = r[0];
        menor = r[1];
    }
    else if(r[0].x0 < r[1].x0){
        maior = r[1];
        menor = r[0];
    }
    else{
        if(r[0].y0 > r[1].y0){
            maior = r[0];
            menor = r[1];
        }
        else{
            maior = r[1];
            menor = r[0];
        }
    }

    //if((menor.x0 < maior.x0 && menor.x1 > maior.x1) && (menor.y0 < maior.y0 && menor.y1 > maior.y1)) {
    //    cout<<"0"<<endl;
    //    return 0;
    //}

    if(((maior.x0 >= menor.x0 && maior.x0 <= menor.x1) && (maior.y0 >= menor.y0 && maior.y0 <= menor.y1)) || ((maior.x1 >= menor.x0 && maior.x1 <= menor.x1) && (maior.y1 >= menor.y0 && maior.y1 <= menor.y1)))
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;

}
