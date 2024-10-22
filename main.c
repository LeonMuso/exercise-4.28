#include <stdio.h>

int main(void) {
    int num, massimoN = 0;
    for ( int i = 1; i <= 10; i++) {
        printf("inserisci dieci numeri:");
        scanf("%d", &num);
        if(num > massimoN) {
            massimoN = num;
        }
    }
    printf("%d\n", massimoN);
    return 0;
}

