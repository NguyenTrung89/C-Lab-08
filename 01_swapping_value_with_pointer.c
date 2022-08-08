/*Bai 01. Sử dụng con trỏ để gán giá trị cho 2 biến nguyên a, b. Tráo đổi giá trị của 2 biến này thông qua con trỏ, 
hiển thị giá trị của 2 biến sau khi tráo đổi giá trị và địa chỉ vùng nhớ của 2 biến này.*/
#include<stdio.h>

//swap the value of 2 integers
void swapInt(int *number1, int *number2)
{
    int temp;
    temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

int main()
{
    //Declaration
    int a, *p_a = &a;
    int b, *p_b = &b;

    //Assign value ​​to a, b using pointer
    *p_a = 10;
    *p_b = 20;

    //Display
    printf("Oiginal value:\n");
    printf("a = %d, &a = %u\n", a, &a);
    printf("b = %d, &b = %u\n", b, &b);
    printf("----------------------\n");

    //Swap value
    swapInt(p_a, p_b);

    //Display
    printf("Value after swap:\n");
    printf("a = %d, &a = %u\n", a, &a);
    printf("b = %d, &b = %u\n", b, &b);
    printf("----------------------\n");

    return 0;
}
