#include <stdio.h>
#include <math.h>


int main()
{
    int tc, i;
    double o, r;
    double pi = 2 * acos(0.0);
    scanf("%d", &tc);
    for(i = 1; i<=tc; i++){
        scanf("%lf", &r);
        o = ((2*r)*(2*r)) - pi*r*r + .0000001;
        printf("Case %d: %0.2lf\n",i, o);
    }
    return 0;
}