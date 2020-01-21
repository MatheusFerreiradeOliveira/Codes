#include <bits/stdc++.h>
using namespace std;

const int MAX = 1010;
int mat[MAX][MAX];

int main() {

    int n, q;
    cin>>n;

    int cont = 1;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j){
            mat[i][j] = cont++;
        }
    }

    cin>>q;

    while(q--) {
        int a, b, c, d;
        cin>>a;
        if(a == 1) {
            long long sum = 0;
            cin>>b;
            if(b > n) {
                long long sum = 0;
                b -= n;
                for(int i = b, j = n - 1; i < n ;i++, j--) {
                    sum += mat[i][j];
                }
                printf("%lld\n", sum);
            }
            else {
                b--;
                for(int i = 0, j = b; i <= b; ++i, --j) {
                //if(i < 0 || j >= n) cout<<"AQUI 1"<<endl;
                    sum += mat[i][j];
                }
                printf("%lld\n", sum);
            }
        }
        else if(a == 2) {
            set<int> lul;
            cin>>b;

            if(b > n) {
                b -= n;
                for(int i = b, j = n - 1; i < n; i++, j--) {
                    lul.insert(mat[i][j]);
                }
            }

            else {
                b--;
                for(int i = 0, j = b; i <= b; ++i, --j) {
                    //if(i < 0 || j >= n) cout<<"AQUI 2"<<endl;
                    lul.insert(mat[i][j]);
                }
            }
            printf("%d\n", lul.size());
        }
        else {
            cin>>b>>c>>d;
            c--;
            d--;
            mat[c][d] += b;
        }
    }


}

