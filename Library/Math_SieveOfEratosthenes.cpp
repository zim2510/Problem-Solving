vector <bool> primeFlag;
vector <int> primes;

void siv(int lmt = 10000000)
{
	primeFlag.resize(lmt/2);
	for(int i = 3; i*i<lmt; i+=2){
		if(!primeFlag[i>>1]) for(int x = i*i; x<lmt; x+=2*i) primeFlag[x>>1] = 1;
	}
	primes.push_back(2);
	for(int i = 1; i<(lmt>>1); i++){
		if(!primeFlag[i]) primes.push_back((i<<1)+1);
	}
}