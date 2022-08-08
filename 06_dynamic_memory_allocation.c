/*Bài 06.  Dùng con trỏ và cấp phát động để tạo một mảng nguyên có độ dài tuỳ ý nhập từ bàn phím. 
Nhập các giá trị cho mảng được cấp phát, 
hiển thị mảng và danh sách các phần tử có giá trị là số nguyên tố.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <stdbool.h>

///Function check prime number
bool isPrime(int Number) {
    bool result = true;
    int i;

    if(Number <= 1) {
        result = false;
    }
    for(i = 2; i <= sqrt(Number); i++) {
        if(Number % i == 0) {
            result = false;
        }
    }

    return result;
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
    int sizeArr;
    int *p_intArr;
    int countPrime = 0;
    int primeArr[countPrime];
    int i;

    printf("Enter size of array: ");
    scanf("%d", &sizeArr);

    //Dynamic memory allocation for array
    p_intArr = (int*)calloc(sizeArr, sizeof(int));

    if(p_intArr == NULL)
    {
        printf("Not enough memory!");
        exit(0);
    }

    //Input elements
    for(i = 0; i < sizeArr; i++)
    {
        printf("Enter data for element %d: ", i + 1);
        scanf("%d", (p_intArr + i));
    }

    //check prime number
    for(i = 0; i < sizeArr; i++)
    {
        if(isPrime(*(p_intArr + i)) == true) {
            primeArr[countPrime] = *(p_intArr + i);
            ++countPrime;
        }
    }

    //Display result
    printf("\nArray entered:\n");
    displayArray(p_intArr, sizeArr);
    printf("\nPrime numbers are:\n");
    displayArray(primeArr, countPrime);

    free(p_intArr);

    return 0;
}
