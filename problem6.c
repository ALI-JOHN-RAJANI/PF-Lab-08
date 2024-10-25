#include <stdio.h>
int main() {
    int SIZE = 3;
    int matrix[SIZE][SIZE];
    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Saddle Points in the matrix:\n");

    for (int i = 0; i < SIZE; i++) {
        int minRow = matrix[i][0];
        int colIndex = 0;

        for (int j = 1; j < SIZE; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }

        int isSaddlePoint = 1;
        for (int k = 0; k < SIZE; k++) {
            if (matrix[k][colIndex] > minRow) {
                isSaddlePoint = 0;
                break;
            }
        }

        if (isSaddlePoint) {
            printf("Saddle Point at (%d, %d): %d\n", i, colIndex, minRow);
        }
    }

    return 0;
}
