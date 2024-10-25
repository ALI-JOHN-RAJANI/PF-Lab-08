#include <stdio.h>

int main() {
    int start;
    printf("Enter the starting odd number: ");
    scanf("%d", &start);
    if (start % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    int rows = (start + 1) / 2;  
    for (int i = rows; i > 0; i--) {
        int current = start;  
        for (int j = 0; j < i; j++) {
            printf("%d ", current);
            current -= 2; 
        }

        printf("\n");
        start -= 2;
    }

    return 0;
}
