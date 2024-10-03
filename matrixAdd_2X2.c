#include <stdio.h>
#define SIZE 2

void addMatrix(int matrix_1[SIZE][SIZE], int matrix_2[SIZE][SIZE], int sum[SIZE][SIZE])
{

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {

            sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }
}

int main()
{
    int matrix_1[SIZE][SIZE] = {{2, 4}, {3, 5}};
    int matrix_2[SIZE][SIZE] = {{1, 2}, {2, 1}};
    int sum[SIZE][SIZE];
    addMatrix(matrix_1, matrix_2, sum);
    printf("Addition of two matrices:\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
