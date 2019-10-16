#include <stdio.h>
 
int main()
{
    int i, j, k, l;
 
    scanf("%d", &i);
    getchar();
 
    for(j=1;j<=i;j++){
        scanf("%d %d", &k, &l);
 
        printf("Case %d: %d\n", j, k+l);
    }
 
    return 0;
}