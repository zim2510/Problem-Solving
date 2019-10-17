//Be careful with the size of "primes" array.
const int LMT = 10000000;
int primeFlag[LMT/64];
int primes[664590];
int primeCnt = 0;

bool check(int N, int pos) {return (bool)(N & (1<<pos));}
int sset(int N, int pos) {return N = N | (1<<pos);}

void siv()
{
	for(int i = 3; i*i<=LMT; i+=2){
		//i>>6 is equivalent to i /= 64, finding out the index which contains this value
		//(i&(i<<6)-1) is the equivalent of i %= 64
		if(!check(primeFlag[i>>6], (i&((1<<6)-1))>>1)){ 
			for(int x = i*i; x<LMT; x+=2*i){
				primeFlag[x>>6] = sset(primeFlag[x>>6], (x&((1<<6)-1))>>1);
			}
		}
	}
	primes[primeCnt++] = 2;
	for(int i = 3; i<LMT; i+=2){
		if(!check(primeFlag[i>>6], (i&((1<<6)-1))>>1)) primes[primeCnt++] = i;
	}
}