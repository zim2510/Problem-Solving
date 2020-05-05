#include <stdio.h>

int main()
{
    int tc, i, p1, p2, r;
    scanf("%d", &tc);
    for(i = 1; i<=tc; i++){
        scanf("%d %d", &p1, &p2);
        if(p1>p2) p2 = p1 + (p1-p2);
        r = p2*4 + 9 + 10;
        printf("Case %d: %d\n", i, r);
    }
    return 0;

}
