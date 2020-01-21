#include <bits/stdc++.h>
using namespace std;
int x, y;
bool caiu(int mov){
    if(mov == 1 || mov == 4) x+=1;
    else if(mov == 2 || mov == 3) x+=2;
    else if(mov == 8 || mov == 5) x-=1;
    else if(mov == 6 || mov == 7) x-=2;

    if(mov == 1 || mov == 8) y+=2;
    else if(mov == 7 || mov == 2) y+=1;
    else if(mov == 6 || mov == 3) y-=1;
    else if(mov == 4 || mov == 5) y-=2;

    if (x == 1 && y == 3)
        return true;
    if (x == 2 && y == 3)
        return true;
    if (x == 2 && y == 5)
        return true;
    if (x == 5 && y == 4)
        return true;
    return false;
}
int main(){
    int n;
    x = 4;
    y = 3;
    cin>>n;
    int vet[n];
    int cont = 0, resp = n;
    for(int i = 0; i < n; i++){
        cin>>vet[i];
        if(caiu(vet[i]) && cont < 1){
            cont++;
            resp = i+1;
        }
    }
    cout<<resp<<endl;

}
