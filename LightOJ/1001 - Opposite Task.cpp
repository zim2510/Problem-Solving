#include <stdio.h>
 
int main()
{
    int i, j, k, l;
 
    scanf("%d", &i);
    getchar();
 
    for(j=1;j<=i;j++){
        scanf("%d", &k);
 
        l=0;
 
        if(k>=10) {
            l=k-10;
            k=k-l;
        }
 
        printf("%d %d\n", k, l);
    }
 
    return 0;
}