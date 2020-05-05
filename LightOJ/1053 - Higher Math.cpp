#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int tc, i;
    int sides[3];
    scanf("%d", &tc);
    for(int i = 1; i<=tc; i++){
        scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);
        sort(sides, sides+3);
        if(sides[2]*sides[2] == (sides[0]*sides[0])+sides[1]*sides[1]) printf("Case %d: yes\n", i);
        else printf("Case %d: no\n", i);
    }
    return 0;
}
