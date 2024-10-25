#include <stdio.h>
int main() {
    int SIZE = 3;
    int matrixA[SIZE][SIZE], matrixB[SIZE][SIZE], result[SIZE][SIZE];

    printf("Enter elements of the first 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }


    printf("Enter elements of the second 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    
    printf("Resulting matrix after multiplication:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
