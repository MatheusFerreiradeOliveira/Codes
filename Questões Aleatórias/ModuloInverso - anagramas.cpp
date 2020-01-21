#include <bits/stdc++.h>
using namespace std;

#define true 1
#define false 0
#define MAX 200100
#define MOD 1000000007

long long rep[30];
long long fat[MAX];

long long mdc(long long a, long long b, long long *x, long long *y) {

	long long xx, yy, d;
	if (b == 0LL){
		*x = 1LL;
		*y = 0LL;
		return a;
	}

	d = mdc(b, a % b, &xx, &yy);
	*x = yy;
	*y = xx - ((a / b) * yy);

	return d;
}

long long inv5(long long a) {
	long long x, y, d;
	d = mdc(a, MOD, &x, &y);

	if (x < 0)
		x = x + MOD;

	return x;
}

int main (){
	long long a;
	//unsigned tam;
	long long i, x;
	string s;

	cin>>s;

	for (i = 0; i < s.size(); ++i)
		rep[(s[i] - 'a')]++;

	fat[1] = 1LL;

	for (i = 2; i <= s.size(); ++i)
		fat[i] = (i * fat[i - 1]) % MOD;

	a = 1LL;
	for (i = 0; i < 26; ++i)
		if (rep[i])
			a = (fat[rep[i]] * a) % MOD;

	x = inv5(a);
	printf("%lld\n", (fat[s.size()] * x) % MOD);
}
