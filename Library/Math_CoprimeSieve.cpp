//Change the ephi array size according to lmt, they must have equal values
int ephi[10000000];

void phisiv(int lmt = 10000000)
{
	ephi[0] = 1; for(int i = 1; i<lmt; i++) ephi[i] = i;
	for(int i = 2; i<lmt; i++){
		if(ephi[i]==i){
			for(int x = i; x<lmt; x += i){
				ephi[x] -= (ephi[x]/i);
			}
		}
	}
}