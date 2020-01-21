//Prog Dinamica, problema das moedas.
//C é um vetor com os valores das moedas
//X é o valor que quer descobrir se da pra fazer
int dp[MAX];
int solve(int x, vector<int> &c){

	if(x==0) return 1;

	if(x<0) return 0;

	if(dp[x]>=0) return dp[x];

	for(int i=0;i<c.size();i++)
		if(solve(x-c[i])) return dp[x-c[i]]=1;

	return dp[x]=0;
}
