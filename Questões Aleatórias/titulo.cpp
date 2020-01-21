#include <bits/stdc++.h>

using namespace std;

string title(string F){
	F[0] = toupper(F[0]);
	for(int i = 1; i<F.size();i++){
        if(F[i] == ' '){
            F[i+1] = toupper(F[i+1]);
            i++;
        }
        else
            F[i] = tolower(F[i]);
	}
	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
}
