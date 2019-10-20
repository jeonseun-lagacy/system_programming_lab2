#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, col, i, j;	

	printf("input matrix size: ");
	scanf("%d %d", &row, &col);
	int **matrix1, **matrix2;

	matrix1 = (int **)malloc(sizeof(int *) * row);
	matrix2 = (int **)malloc(sizeof(int *) * row);

	for(i = 0; i < row; i++){
		matrix1[i] = (int *)malloc(sizeof(int) * col);
		matrix2[i] = (int *)malloc(sizeof(int) * col);
	}
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			matrix1[i][j] = (int)(49*(rand()/(RAND_MAX+1.0)));
			matrix2[i][j] = (int)(49*(rand()/(RAND_MAX+1.0)));
		}
	}
	printf("---matrix one---\n");
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%3d",matrix1[i][j]);	
		}printf("\n");
	}
	printf("---matrix two---\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
           printf("%3d",matrix2[i][j]);
        }printf("\n");
    }
	printf("---matrix sum---\n");
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%3d",matrix1[i][j] + matrix2[i][j]);
		}printf("\n");
	}
	return 0;
}
