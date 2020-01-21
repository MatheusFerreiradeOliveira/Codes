#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    while(cin>>t){
        bool deucerto = false;
        int runner = t;
        int lul = 0;
        for(; runner >= lul; ){
                if(runner*runner + lul*lul == t){
                    deucerto = true;
                    break;
                }
                else if(runner*runner + lul*lul > t)
                    runner--;
                else if(runner*runner + lul*lul < t)
                    lul++;
        }
        if(deucerto)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
