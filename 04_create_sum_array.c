/*Cho 02 mảng số nguyên A, B gồm 5 phần tử. Nhập giá trị cho các phần tử của 2 mảng này. 
Dùng con trỏ để tính tổng các phần tử của A, B vào mảng C: C[i] = A[i] + B[i]
In toàn bộ các mảng ra màn hình */

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define SIZE_OF_ARRAY(array)  (sizeof(array) / sizeof(array[0]))

//Generate a random number
int getRandom(int min, int max) {
    int randomNumber;
    randomNumber = min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));

    return randomNumber;
}

//Display array
void displayArray(int *arr, int size) {
    int i;

    for(i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
}

int main() {
    //Declaration
    int n = 5; //length of array
    int A[n], B[n], C[n];
    int i;

    srand((unsigned int)time(NULL));
    //Create array A & B
    for(i = 0; i < n; i++) {
        *(A + i) = getRandom(0, 100);
        *(B + i) = getRandom(0, 100);
    }

    //Create array C: C[i] = A[i] + B[i]
    for(i = 0; i < n; i++) {
        *(C + i) = *(A + i) + *(B + i);
    }

    //Display
    printf("Array A: ");
    displayArray(A, n);
    printf("\nArray B: ");
    displayArray(B, n);
    printf("\nArray C: ");
    displayArray(C, n);

    return 0;
}
