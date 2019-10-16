#include <stdio.h>
 
int main()
{
    int tc,i, odd;
    long long int n;
    scanf("%d", &tc);
    for(i = 1; i<=tc; i++){
        scanf("%lld", &n);
        odd = 0;
        while(n){
            if(n%2) odd++;
            n = n/2;
        }
        if(odd%2) printf("Case %d: odd\n", i);
        else printf("Case %d: even\n", i);
    }
    return 0;
}