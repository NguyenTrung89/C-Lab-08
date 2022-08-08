//BLT 01: Nhập một chuỗi từ bàn phím, dùng con trỏ để đảo ngược chuỗi. VD : ABCedf thành fdeCBA.

#include<stdio.h>
#include<string.h>

void reverse(char *p_str) {
    int i, length;
    char temp;
    length = strlen(p_str);
    for(i = 0; i < length / 2; i++) {
        temp = *(p_str + i);
        *(p_str + i) = *(p_str + length - 1 - i);
        *(p_str + length - 1 - i) = temp;
    }

}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("\nEntered string: %s\n", str);

    reverse(str);
    printf("Reversed string: %s\n", str);

    return 0;
}