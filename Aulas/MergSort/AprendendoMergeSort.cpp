#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+10;

int merge_sort(vector<long long> &v){

    // declaro inv, o total de invers�es
    int inv=0;

    // se o tamanho de v for 1, n�o h� invers�es
    if(v.size()==1) return 0;

    // se n�o

    // declaro os vetore u1 e u2
    vector<long long> u1, u2;

    // e fa�o cada um receber uma metade de v
    for(int i=0;i<v.size()/2;i++){
        u1.push_back(v[i]);
    }
    for(int i=v.size()/2;i<v.size();i++){
        u2.push_back(v[i]);
    }
    // ordeno u1 e u2
    // e adiciono a inv as invers�es de cada metade do vetor
    inv+=merge_sort(u1);
    inv+=merge_sort(u2);

    // e adiciono INF ao final de cada um deles
    u1.push_back(-INF);
    u2.push_back(-INF);

    // declaro ini1 e ini2 com valore inicial zero
    int ini1=0, ini2=0;

    // percorro cada posi��o de v
    for(int i=0;i<v.size();i++){

        // se o menor n�o usado de u1 for menor o mesmo em u2
        if(u1[ini1]>u2[ini2]){

            // ent�o o coloco em v
            v[i]=u1[ini1];

            // e incremento o valor de ini1
            ini1++;
        }

        // caso contr�rio, fa�o o an�logo com u2 e ini2
        else{

            v[i]=u2[ini2];
            ini2++;

            // n�o se esquecendo de adicionar o n�mero de elementos em u1
            // ao total deinvers�es em v
            inv+=u1.size()-ini1-1;
        }
    }

    // por fim, retorno a quantidade de invers�es
    return inv;
}

int main(){

    int n;

    cin>>n;

    vector<long long> lul;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin>>a>>b;
        lul.push_back((a*a)+(b*b));
    }

    for(auto x : lul){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<merge_sort(lul)<<endl;

}
