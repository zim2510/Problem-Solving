//Requires Math_SieveOfEratosthenes.cpp
//Change data type as per the need

vector <int> factorized, pwr;
void factorize(int n)
{
	for(int i = 0; i<primes.size() && primes[i]*primes[i]<=n; i++){
		if(n%primes[i]==0){
			factorized.push_back(primes[i]);
			int cnt = 0;
			while(n%primes[i]==0){
				n /= primes[i];
				cnt++;
			}
			pwr.push_back(cnt);
		}
	}
	if(n!=1){
		factorized.push_back(n);
		pwr.push_back(1);
	}
}