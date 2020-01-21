#include <bits/stdc++.h>
using namespace std;

bool eh_primo(int x){
	int divisores = 2;
	for(int i = 2; i <= x/2; i++)
    {
        if(x%i == 0)
            divisores++;
    }
    if(divisores > 2)
        return false;
    return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout<<"S"<<"\n";
	}else{
		cout<<"N"<<"\n";
	}
}
