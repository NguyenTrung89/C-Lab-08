/*Bài 03. Cho chuỗi (mảng ký tự) có độ dài tối đa là 80(nhập từ bàn phím). 
Viết chương trình dùng con trỏ để xác định xem chuỗi đó có phải chuỗi đối xứng hay không.
VD về chuỗi đối xứng: ABBA, oto,ahaaha, xyztzyx, ....*/

#include<stdio.h>
#include<string.h>
#include <stdbool.h>

//Symmetric string check function
bool isSymmetry(char *p_str) {
    bool result = true;
    int i, length;

    length = strlen(p_str);
    for(i = 0; i < length / 2; i++) {
        if(*(p_str + i) != *(p_str + length - 1 - i)) {
            result = false;
        }
    }

    return result;
}

int main()
{
    char sChar[80];

    printf("Enter a string:\n");
    gets(sChar);

    if(isSymmetry(sChar) == true) {
        printf("Symmetric string!");
    }
    else {
        printf("Asymmetrical string!");
    }

    return 0;
}
