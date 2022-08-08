//BLT 03. Viết chương trình quản lý điểm 4 môn học của N học sinh, N nhập từ bàn phím.

//Áp dụng công thức đổi mảng 2 chiều thành 1 chiều: với mảng A[m][n] thì A[i][j] = A[i * n + j]
#include<stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int numberOfSubjects = 4;
    int *p_Score; //p_Score = Arr[N][4]
    int i, j;

    printf("Enter student number: ");
    scanf("%d", &N);

    //Dynamically allocating arrays
    p_Score = (int*)malloc(N * numberOfSubjects * sizeof(int));
    if(p_Score == NULL)
    {
        printf("Not enough memory!");
        exit(0);
    }

    //Enter scores
    for(i = 0; i < N; i++) {
        for(j = 0; j < numberOfSubjects; j++) {
            printf("Student %d, subject %d score: ", i + 1, j + 1);
            scanf("%d", (p_Score + i * numberOfSubjects + j));
        }
    }

    //Display result
    printf("| Student | Subject 1 | Subject 2| Subject 3 | Subject 4 |\n");
    printf("-----------------------------------------------------------\n");
    for(i = 0; i < N; i++) {
        printf("|Student %d|", i + 1);
        for(j = 0; j < numberOfSubjects; j++) {
            printf("     %d     |", *(p_Score + i * numberOfSubjects + j));
        }
        printf("\n");
    }

    free(p_Score);

    return 0;
}
