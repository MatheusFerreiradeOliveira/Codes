#include <cstdio>
#include <set>

using namespace std;

int n;

set<int> conj;

int main(){
    int n;
	scanf("%d", &n); // leio o valor de n

	for(int i=1; i<=n; i++){ // para cada operação

		//vou ler sua descrição
		int p, x;
		scanf("%d %d", &p, &x);

		if(p==1) conj.insert(x); // se p=1, insiro x em conj
		if(p==2) conj.erase(x); // se p=2, retiro x de conj
	}

	set<int>::iterator it; // crio um iterator de nome it que sabe percorrer um set de int

	// faço ele começar com um ponteiro para o começo do set, e enquanto ele não apontar para o fim
	for(it=conj.begin(); it!=conj.end(); it++) // faço ele apontar para o próximo elemento
		printf("%d\n", *it); // imprimindo o valor que está salvo na posição por ele apontada

	return 0;
}
