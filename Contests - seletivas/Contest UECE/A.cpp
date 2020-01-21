#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int davez;
    cin>>n;
    int np = 0, ni = 0;
    for(int i = 0; i < n; i++){
        cin>>davez;
        if(davez%2 == 0)
            np++;
        else
            ni++;
    }
    cout<<np<<" "<<ni<<endl;
    return 0;
}
