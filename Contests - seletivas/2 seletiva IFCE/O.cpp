#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> mds;

    for(int i = 65; i <= 81; i++) {
        mds.insert(i);
    }

    set<int>saida;

    for(int i = 0; i < 8; i++) {
        int a, b;
        cin>>a>>b;

        if(a > b) {
            int lul = *mds.begin();
            saida.insert(lul);
            mds.erase(*mds.begin());
            //cout<<*mds.begin()<<" perdeu"<<endl;
            mds.erase(*mds.begin());
        }
        else {
            mds.erase(*mds.begin());
            int lul = *mds.begin();
            saida.insert(lul);
            mds.erase(*mds.begin());
        }
    }

    mds.clear();
    mds = saida;
    saida.clear();

    for(int i = 0; i < 4; i++) {
        int a, b;
        cin>>a>>b;

        if(a > b) {
            int lul = *mds.begin();
            saida.insert(lul);
            mds.erase(*mds.begin());
            //cout<<*mds.begin()<<" perdeu"<<endl;
            mds.erase(*mds.begin());
        }
        else {
            mds.erase(*mds.begin());
            int lul = *mds.begin();
            saida.insert(lul);
            mds.erase(*mds.begin());
        }
    }

    mds.clear();
    mds = saida;
    saida.clear();

    for(int i = 0; i < 2; i++) {
        int a, b;
        cin>>a>>b;

        if(a > b) {
            int lul = *mds.begin();
            saida.insert(lul);
            mds.erase(*mds.begin());
            //cout<<*mds.begin()<<" perdeu"<<endl;
            mds.erase(*mds.begin());
        }
        else {
            mds.erase(*mds.begin());
            int lul = *mds.begin();
            saida.insert(lul);
            mds.erase(*mds.begin());
        }
    }

    mds.clear();
    mds = saida;
    saida.clear();

    for(int i = 0; i < 1; i++) {
        int a, b;
        cin>>a>>b;

        if(a > b) {
            int lul = *mds.begin();
            saida.insert(lul);
            mds.erase(*mds.begin());
            //cout<<*mds.begin()<<" perdeu"<<endl;
            mds.erase(*mds.begin());
        }
        else {
            mds.erase(*mds.begin());
            int lul = *mds.begin();
            saida.insert(lul);
            mds.erase(*mds.begin());
        }
    }

    cout<<(char)*saida.begin()<<endl;

}
