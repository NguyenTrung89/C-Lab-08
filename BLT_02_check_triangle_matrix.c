/* BLT 02: Viết chương trình kiểm tra ma trận tam giác(nửa trên hoặc dưới đường chéo của ma trận đều có giá trị là 0). 
Sử dụng 2 cách: thông thường và dùng con trỏ. */

#include<stdio.h>

void checkTriangularMatrix(int A[100][100], int n) {
    int i, j;
    int lowerTriangularMatrix = 1;
    int upperTriangularMatrix = 1; 
    for(i = 0; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(A[i][j] != 0) {
                upperTriangularMatrix = 0; //Not upper Triangular Matrix
            }
        }
        for(j = i + 1; j < n; j++) {
            if(A[i][j] != 0) {
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
    int A[100][100];
    int matrixSize;
    int i, j;

    printf("Enter matrix size: ");
    scanf("%d", &matrixSize);

    for(i = 0; i < matrixSize; i++) {
        for(j = 0; j < matrixSize; j++) {
            printf("A%d%d = ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix A:\n");
    for(i = 0; i < matrixSize; i++) {
        for(j = 0; j < matrixSize; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    checkTriangularMatrix(A, matrixSize);

    return 0;
}
