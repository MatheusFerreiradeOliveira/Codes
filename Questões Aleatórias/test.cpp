#include <bits/stdc++.h>
using namespace std;
int main(){
    int album[2], f1[2],f2[2];
    bool deucerto = false;
    cin>>album[0]>>album[1]>>f1[0]>>f1[1]>>f2[0]>>f2[1];
    for(int i = 0; i < 8; i++){
        if((f1[i&1] + f2[(i>>1)&1] <= album[(i>>2)&1])
            && (max(f1[!(i&1)], f2[!((i>>1)&1)]) <= album[!((i>>2)&1)]))
                deucerto = true;
    }
    if(deucerto)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
