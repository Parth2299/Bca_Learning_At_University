//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int i, j, max;

    printf("The matrix is:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe maximum elements in each row are:\n");

    for (i = 0; i < 3; i++) {
        max = matrix[i][0];
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
