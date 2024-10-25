#include <stdio.h>

int main() {
    int array_3d[2][2][2] = {
        {
            {1, 2}, 
            {3, 4}
        },
        {
            {5, 6}, 
            {7, 8}
        }
    };
    printf("The 2x2x2 3D array is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("array_3d[%d][%d][%d] = %d\n", i, j, k, array_3d[i][j][k]);
            }
        }
    }

    return 0;
}
