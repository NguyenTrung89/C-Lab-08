/*Bài 02. Viết chương trình nhập dữ liệu cho một mảng nguyên gồm 5 phần tử thông qua con trỏ ptr.
Hiển thị mảng đó bằng cách sử dụng con trỏ mảng(dùng tên mảng như 1 con trỏ).*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 5; //Number elements of the array
    int *ptr;
    int i;

    //Dynamic memory allocation for array
    ptr = (int*)calloc(n, sizeof(int));

    if(ptr == NULL)
    {
        printf("Not enough memory!");
        exit(0);
    }

    //Input elements
    for(i = 0; i < n; i++)
    {
        printf("Enter data for element %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    //Display elements
    printf("-------------------\n");
    printf("Array elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    free(ptr);

    return 0;
}