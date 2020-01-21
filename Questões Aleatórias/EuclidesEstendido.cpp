#include <bits/stdc++.h>
using namespace std;
//PROBLEMA: Encontre M e N de forma que Am * Bn = mdc(A, B);
//formula: r = a(u - (u1*q)) * b(v - (v1 * q));
//o segundo de cima  - o de cima * o q;
struct Ponto {
    int r, u, v;
};
Ponto euclides (int a, int b){
	int r = a, r1 = b, u = 1, v = 0, u1 = 0, v1 = 1, rs, us, vs, q;
	while (r1 != 0){
		q = (r / r1);
		rs = r;
		us = u;
		vs = v;
		r = r1;
		u = u1;
		v = v1;
		r1 = rs - q *r1;
		u1 = us - q*u;
		v1 = vs - q*v1;
	}
	Ponto p;
	p.r = r;
	p.u = u;
    p.v = v;
	return p; // tais que a*u + b*v = r et r = pgcd (a, b)
}
int main() {
    Ponto gg = euclides(3, 7);
    cout<<gg.r<<" "<<gg.u<<" "<<gg.v<<endl;
}
