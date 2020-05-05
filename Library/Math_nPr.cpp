//memset npr array with -1, don't worry about the unsigned keyword, compiler will handle it automatically
//change the mod value as per need

unsigned long long npr[1005][1005];

unsigned long long nPr(int n, int r, int mod = 10000007)
{
	if(npr[n][r]!=-1) return npr[n][r];
	if(n==0 || r==0)  return 1;
	return npr[n][r] = ((n%mod)*nPr(n-1, r-1, mod))%mod;
}