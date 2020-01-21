#include <bits/stdc++.h>
using namespace std;

int main() {

    int x1,x2,y1,y2;

    int n;

    cin>>n;

    int soma = 0;

    for(int i = 0; i < n; i++) {
        cin>>x1>>y1>>x2>>y2;

        if(x1 == x2 && y1 == y2) continue;

        soma += pow(x1-x2,2) + pow(y1-y2, 2);

        //cout<<"Adicionou: "<<aux<<endl;
    }

    cout<<soma<<endl;

}
