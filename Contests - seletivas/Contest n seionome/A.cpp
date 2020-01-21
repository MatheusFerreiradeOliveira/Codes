#include <bits/stdc++.h>
using namespace std;

int main() {

    int vet1[2];
    int vet2[2];
    int vet3[2];

    map<int, int> mp;

    cin>>vet1[0]>>vet1[1]>>vet2[0]>>vet2[1]>>vet3[0]>>vet3[1];

    mp[vet1[0]]++;
    mp[vet1[1]]++;

    if(vet1[0] == vet1[1]) mp[vet1[0]]--;

    mp[vet2[0]]++;
    mp[vet2[1]]++;

    if(vet2[0] == vet2[1]) mp[vet2[0]]--;

    mp[vet3[0]]++;
    mp[vet3[1]]++;

    /*if(vet3[0] == vet3[1]) mp[vet3[0]]--;

    if(vet1[0] + vet2[0] + vet3[0] == vet1[1] + vet2[1] + vet3[1]) {
        cout<<"YES"<<"\n";
    }
    else if(vet1[0] + vet2[0] + vet3[1] == vet1[1] + vet2[1] + vet3[0]) {
        cout<<"YES"<<"\n";
    }
    else if(vet1[0] + vet2[1] + vet3[0] == vet1[1] + vet2[0] + vet3[1]) {
        cout<<"YES"<<"\n";
    }
    else if(vet1[0] + vet2[1] + vet3[1] == vet1[1] + vet2[0] + vet3[0]) {
        cout<<"YES"<<"\n";
    }
    else if(vet1[1] + vet2[0] + vet3[0] == vet1[0] + vet2[1] + vet3[1]) {
        cout<<"YES"<<"\n";
    }
    else if(vet1[1] + vet2[0] + vet3[1] == vet1[0] + vet2[1] + vet3[0]) {
        cout<<"YES"<<"\n";
    }
    else if(vet1[1] + vet2[1] + vet3[0] == vet1[0] + vet2[0] + vet3[1]) {
        cout<<"YES"<<"\n";
    }
    else if(vet1[1] + vet2[1] + vet3[1] == vet1[0] + vet2[0] + vet3[0]) {
        cout<<"YES"<<"\n";
    }
    else {*/

        bool achou = false;

        for(int i = 1; i <= 100; ++i) {
            if(mp[i] == 3) {

                mp[i]--;

                //cout<<"Entrou aqui com "<<i<<endl;

                int a, b, c;

                (vet1[0] == i) ? a = vet1[1] : a = vet1[0];
                (vet2[0] == i) ? b = vet2[1] : b = vet2[0];
                (vet3[0] == i) ? c = vet3[1] : c = vet3[0];

                //cout<<"a = "<<a<<endl;
                //cout<<"b = "<<b<<endl;
                //cout<<"c = "<<c<<endl;

                if(a + b + c == i)
                    achou = true;
            }
        }
        for(int i = 1; i <= 100; ++i) {
            if(mp[i] == 2) {

                //cout<<"Entrou aqui com ZZZZZZ "<<i<<endl;

                int a, b;
                bool achouA = false;

                bool taaqui[4];

                memset(taaqui, false, sizeof taaqui);

                if(vet1[0] == i) {
                    a = vet1[1];
                    achouA = true;
                    taaqui[1] = true;
                }
                else if(vet1[1] == i){
                    a = vet1[0];
                    achouA = true;
                    taaqui[1] = true;
                }
                if(vet2[0] == i) {
                    if(!achouA) {
                        a = vet2[1];
                        achouA = true;
                    }
                    else b = vet2[1];
                    taaqui[2] = true;
                }
                else if(vet2[1] == i){
                    if(!achouA) {
                        a = vet2[0];
                        achouA = true;
                    }
                    else b = vet2[0];
                    taaqui[2] = true;
                }
                if(vet3[0] == i) {
                    b = vet3[1];
                    taaqui[3] = true;
                }
                else if(vet3[1] == i){
                    b = vet3[0];
                    taaqui[3] = true;
                }

                for(int y = 1; y < 4; ++y) {
                    if(taaqui[y] == false) {
                        if(y == 1) {
                            if(i + vet1[0] == a + b) {
                                achou = true;
                            }
                            else if(i + vet1[1] == a + b){
                                achou = true;
                            }
                        }
                        else if(y == 2) {
                            if(i + vet2[0] == a + b) {
                                achou = true;
                            }
                            else if(i + vet2[1] == a + b){
                                achou = true;
                            }
                        }
                        else if(y == 3) {
                            if(i + vet3[0] == a + b) {
                                achou = true;
                            }
                            else if(i + vet3[1] == a + b){
                                achou = true;
                            }
                        }
                    }
                }
            }
        }

        if(achou) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    //}
}
