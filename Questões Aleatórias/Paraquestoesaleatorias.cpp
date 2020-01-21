#include <bits/stdc++.h>
#define MAX 100
using namespace std;


int main(){
    vector<string> A;
    A.push_back("A");
    A.push_back("B");
    A.push_back("C");

    for(vector<string>::iterator it = A.begin(); it != A.end(); it++){
        cout<<(*it)<<endl;
    }
}
