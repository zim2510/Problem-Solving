//memset ncr array with -1, don't worry about the unsigned keyword, compiler will handle it automatically
//change the mod value as per need

unsigned long long ncr[1005][1005];

unsigned long long nCr(int n, int r, int mod = 10000007)
{
	if(ncr[n][r]!=-1) return ncr[n][r];
	if(n==r || r==0) return 1;
	return ncr[n][r] = ((nCr(n-1, r, mod) + nCr(n-1, r-1, mod)))%mod;
}