#include <bits/stdc++.h>
using namespace std;

struct Time{
    int Nvit = 0, sg = 0, pont = 0;
    string nome;
};

bool compara(Time A, Time B) {

    if(A.pont != B.pont)
        return A.pont > B.pont;

    if(A.Nvit != B.Nvit)
        return A.Nvit > B.Nvit;

    if(A.sg != B.sg)
        return A.sg > B.sg;

    return A.nome < B.nome;
}

int main() {

    Time times[4];

    for(int i = 0; i < 4; i++) {
        string s;
        cin>>s;
        times[i].nome= s;
    }

    int m;

    cin>>m;

    for(int i = 0; i < m; i++) {
        string a, b;
        int c, d;

        cin>>a>>c>>b>>d;

        if(c > d){
            for(int j = 0; j < 4; j++){
                if(times[j].nome == a){
                    times[j].pont += 3;
                    times[j].Nvit++;
                    times[j].sg += (c - d);
                }
                else if(times[j].nome == b) {
                    times[j].sg -= (c - d);
                }
            }
        }
        else if( c == d) {
            for(int j = 0; j < 4; j++){
                if(times[j].nome == a)
                    times[j].pont += 1;
                else if(times[j].nome == b)
                    times[j].pont += 1;
            }
        }else {
            for(int j = 0; j < 4; j++){
                if(times[j].nome == b){
                    times[j].pont += 3;
                    times[j].sg += (d - c);
                    times[j].Nvit++;
                }
                else if(times[j].nome == a) {
                    times[j].sg -= (d - c);
                }
            }
        }
    }

    sort(times, times+4, compara);

    //int cont;

    //cont = 0;

    /*for(int i = 0; i < 4; i++) {
        cout<<times[i].nome<<" PONT = "<<times[i].pont<<" nvit = "<<times[i].Nvit<<" SG = "<<times[i].sg<<endl;
    }*/

    cout<<times[0].nome<<endl;
    cout<<times[1].nome<<endl;



}
