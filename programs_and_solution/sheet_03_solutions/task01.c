#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 2, cols = 3;

    int **mat1 = (int **)malloc(rows * sizeof(int *));
    int **mat2 = (int **)malloc(rows * sizeof(int *));
    int **res  = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++) {
        mat1[i] = (int *)malloc(cols * sizeof(int));
        mat2[i] = (int *)malloc(cols * sizeof(int));
        res[i]  = (int *)malloc(cols * sizeof(int));
    }

    int val = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat1[i][j] = val;
            mat2[i][j] = val * 2;
            val++;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Result Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(mat1[i]);
        free(mat2[i]);
        free(res[i]);
    }
    free(mat1);
    free(mat2);
    free(res);

    return 0;
}
