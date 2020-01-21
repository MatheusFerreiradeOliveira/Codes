#include <bits/stdc++.h>
using namespace std;

int k;
int mat[2][200001];
bool visit[2][200001];

bool recursion(int i, int j, string direcao) {

    if(i < 0 || j >= k || j < 0 || i > 2) return false;

    //if(visit[i][j]) return false;

    //visit[i][j] = true;

    if(i == 0 && j == 0) {
        if(direcao == "lado" && mat[i][j] <= 2) return true;
        if((direcao == "cima" || direcao == "baixo") && mat[i][j] >= 3) return true;
        return false;
    }

    if(direcao == "start") {
        if(mat[i][j] >= 3)
            return recursion(i-1, j, "baixo");
        else
            return recursion(i, j-1, "lado");
    }

    if(direcao == "baixo" || direcao == "cima") {
        if(mat[i][j] <= 2) return false;
        return recursion(i, j-1, "lado");
    }
    if(direcao == "lado") {
        if(mat[i][j] <= 2) return recursion(i, j-1, "lado");
        if(i == 0) return recursion(i+1, j, "cima");
        return recursion(i-1, j, "baixo");
    }
}


int main() {

    int n;

    cin>>n;

    while(n--) {

        //memset(visit, false, sizeof visit);

        cin>>k;

        for(int i = 0; i < 2; ++i) {
            string linha;
            cin>>linha;
            for(int j = 0; j < k; ++j) {
                mat[i][j] = linha[j] - 48;
            }
        }

        bool ans = recursion(1, k-1, "start");

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }



}
