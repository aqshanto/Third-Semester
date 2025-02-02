#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int me, lift;
        scanf("%d %d", &me, &lift);
        int travel = abs(me - lift) * 4;
        int total = travel + 8 + 11 + (me * 4);
        printf("Case %d: %d\n", i, total);
    }
    return 0;
}