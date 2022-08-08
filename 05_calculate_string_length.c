/*Bài 05. Viết chương trình nhập vào 1 chuỗi độ dài tối đa 79 ký tự:
Viết chương trình tính độ dài của chuỗi(số ký tự của chuỗi) bằng cách sử dụng con trỏ.*/

#include<stdio.h>

int strLength(char *p_str) {
    int length = 0;

    while(*p_str != '\0') {
        length++;
        p_str++;
    }

    return length;
}

int main() {
    char str[80];
    int length;

    printf("Enter a string:\n");
    gets(str);
    length = strLength(str);

    printf("String length of \"%s\" is %d", str, length);

    return 0;
}