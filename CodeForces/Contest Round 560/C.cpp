#include <bits/stdc++.h>
#define MAX 200010
using namespace std;

int vet[MAX];
int n;

int main() {

    cin>>n;

    string s;

    cin>>s;

    int saida = 0;
    int j;

    for(int i = 0, j = i+1; j < s.size();) {

        while(s[i] == '-') i++;

        while(s[j] == '-') j++;

        if(s[i] == s[j]) {
            //s[i+1] = '';
            while(j < s.size() && s[i] == s[j]) {
                s[j] = '-';
                j++;
                n--;
                saida++;
            }

            i = j + 1;

            j = i + 1;
        }
        else {
            i+=2;
            j+=2;
        }
    }

    //cout<<"N = "<<n<<endl;

    //cout<<s<<endl;

    if(n%2 == 0){
        cout<<saida<<endl;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '-')
                cout<<s[i];
        }
    }

    else {
        saida++;
        cout<<saida<<endl;
        int ult = s.size() - 1;
        while(1) {
            if(s[ult] != '-') {
                s[ult] = '-';
                break;
            }

            if(ult < 0) break;

            ult --;
        }
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '-')
                cout<<s[i];
        }
    }

    cout<<endl;
}


