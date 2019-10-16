#include <stdio.h>
 
int main(void) {
    int tc, i, j, x, y, x1, y1, x2, y2;
    scanf("%d", &tc);
    for(i=1;i<=tc;i++){
        printf("Case %d:\n", i);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &j);
        while(j--){
            scanf("%d %d", &x, &y);
            if((x>x1 && x<x2) && (y>y1 && y<y2)) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}