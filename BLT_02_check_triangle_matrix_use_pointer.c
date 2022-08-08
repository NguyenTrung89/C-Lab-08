/* BLT 02: Viết chương trình kiểm tra ma trận tam giác(nửa trên hoặc dưới đường chéo của ma trận đều có giá trị là 0). 
Sử dụng 2 cách: thông thường và dùng con trỏ. */

//Áp dụng công thức đổi mảng 2 chiều thành 1 chiều: với mảng A[m][n] thì A[i][j] = A[i * n + j]

#include<stdio.h>
#include <stdlib.h>

void checkTriangularMatrix(int *p_Arr, int n) {
    int i, j;
    int lowerTriangularMatrix = 1;
    int upperTriangularMatrix = 1; 
    for(i = 0; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(*(p_Arr + i * n + j) != 0) {
                upperTriangularMatrix = 0; //Not upper Triangular Matrix
            }
        }
        for(j = i + 1; j < n; j++) {
            if(*(p_Arr + i * n + j) != 0) {
                lowerTriangularMatrix = 0; // Not lower Triangular Matrix
            }
        }
    }

    if(lowerTriangularMatrix == 1 && upperTriangularMatrix == 1) {
        printf("Diagonal Matrix!");
    }
    else if(lowerTriangularMatrix == 1) {
        printf("Lower Triangular Matrix!");
    }
    else if(upperTriangularMatrix == 1) {
        printf("Upper Triangular Matrix!");
    }
    else {
        printf("Not a triangular matrix!");
    }
}

int main() {
    int *p_A; //two-dimensional array pointer: p_A = A[row][column]
    int matrixSize;
    int i, j;

    printf("Enter matrix size: ");
    scanf("%d", &matrixSize);

    //Dynamic memory allocation for array
    p_A = (int*)calloc(matrixSize * matrixSize, sizeof(int));

    if(p_A == NULL)
    {
        printf("Not enough memory!");
        exit(0);
    }

    //Input elements
    for(i = 0; i < matrixSize; i++) {
        for(j = 0; j < matrixSize; j++) {
            printf("A%d%d = ", i + 1, j + 1);
            scanf("%d", (p_A + i * matrixSize + j)); //A[i][j] = A[i * column + j]
        }
        printf("\n");
    }

    printf("Matrix A:\n");
    for(i = 0; i < matrixSize; i++) {
        for(j = 0; j < matrixSize; j++) {
            printf("%d ", *(p_A + i * matrixSize + j));
        }
        printf("\n");
    }

    checkTriangularMatrix(p_A, matrixSize);
    free(p_A);

    return 0;
}
