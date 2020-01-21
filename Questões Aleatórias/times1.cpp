#include <bits/stdc++.h>
using namespace std;

struct jogador{
    string nome;
    int skill;
};

bool compara(jogador a, jogador b){
    return a.skill > b.skill;
}


int main(){
 int J, T;
 cin>>J>>T;
 jogador lul[J];

 for(int i=0;i<J;i++){
    cin>>lul[i].nome>>lul[i].skill;
 }

 sort(lul,lul+J, compara);

  for(int i = 0; i < T; i++){


        vector<string> time;

        int cont = i;

        cout<<"Time "<<i+1<<endl;
        while(cont < J){
            time.push_back(lul[cont].nome);
            cont+=T;
        }

        sort(time.begin(), time.end());

        for(int u = 0; u < time.size(); u++){
            cout<<time[u]<<endl;
        }
        cout<<endl;
  }
 /*

 for(int i=0;i<T;i++){

  int temp=i,o=0;
  string V[100];
  cout<<"Time "<<i+1<<endl;

  for(int j=0;j<J;j++){
   V[j]=Q[temp].nome;
   temp=temp+T;
   if(temp>J){
    break;
   }
   o++;
  }
  cout<<o<<endl;
  sort(V,V+o);
  for(int j=0;j<o;j++){
   cout<<V[J]<<endl;
  }
  cout<<endl;
 }
 */


}
