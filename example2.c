#include <stdio.h>

int main() {
    int i, j;

    printf("Multiplication Table (5x5):\n\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
