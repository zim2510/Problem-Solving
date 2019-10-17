#include <bits/stdc++.h>

#define Read()            freopen("in.txt", "r", stdin)
#define Write()           freopen("out.txt", "w", stdout)
#define min3(a, b, c)     min(a, min(b, c))
#define max3(a, b, c)     max(a, max(b, c))
#define TC(i, a, b)       for(int i = a; i<=b; i++)
#define FOR(i, a, b)      for(int i = a; i<b; i++)
#define ROF(i, a, b)      for(int i = a; i>=b; i--)
#define MEM(a, x)         memset(a, x, sizeof(a))
#define SQR(x)            ((x)*(x))
#define valid(x, s, e)    (x>=s && x<=e)
#define sz(a)             int((a).size())
#define all(c)            (c).begin(),(c).end()
#define tr(c,i)           for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x)      ((c).find(x) != (c).end())
#define cpresent(c,x)     (find(all(c),x) != (c).end())
#define pb                push_back
#define MAX               10000000
#define ff                first
#define ss                second
#define sf                  scanf
#define pf                  printf

const int dx[] = { 0, -1,  0,  1,       -1,  1,  1, -1,     -2, -2,  2,  2, -1, -1,  1,  1};
const int dy[] = {-1,  0,  1,  0,        1,  1, -1, -1,     -1,  1, -1,  1, -2,  2, -2,  2};

using namespace std;


typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef long long LL;
typedef unsigned long long ULL;

bool check(int N,int pos)   { return (bool)(N & (1<<pos)); }
int sset(int N,int pos)      {   return N=N | (1<<pos);      }

int opt[1000000];

int dp(LL n)
{
	int step = 0;

	while(n>=1000000){
		if(n%2) n = n * 3 + 1;
		else n = n/2;
		step++;
	}

	if(n==1) return step;
	if(opt[n]!=-1) return step + opt[n];

	

	if(n%2) opt[n] = 1 + dp(n*3 + 1);
	else opt[n] = 1 + dp(n/2);

	return step + opt[n];
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
   		freopen("out.txt", "w", stdout);
	#endif

	int start, end;
	MEM(opt, -1);

	while(sf("%d %d", &start, &end) == 2){
		int res = 0;
		TC(i, min(start, end), max(start, end)){
			res = max(dp(i), res);
		}
		printf("%d %d %d\n", start, end, res+1);
	}

}