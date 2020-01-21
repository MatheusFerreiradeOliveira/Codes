#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, d;

    scanf("%d", &n);

    while(n--) {
        scanf("%d %d", &m, &d);

        int mds;

        long long int saida = 1e12+10;

        string s;

        cin>>s;

        for(int i = 0; i + d <= m; ++i) {


            for(mds = 1; mds <= 3; ++mds) {
                    long long int changes = 0;
                for(int j = i+1, cont = 1; cont < d; ++j, ++cont) {
                    if(mds == 1 && s[j] != 'G') changes++;

                    else if(mds == 2 && s[j] != 'B') changes++;

                    else if(mds == 3 && s[j] != 'R') changes++;

                    mds++;

                    if(mds > 3) mds = 1;
                }
                saida = min(saida, changes);
            }


        }
        cout<<saida<<endl;
    }
}
