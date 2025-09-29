#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int len, pass = 1;

    printf("Enter a word:\n");
    scanf("%100s", str); // รับเฉพาะคำเดียว (ไม่มีช่องว่าง)

    len = strlen(str);

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            pass = 0;
            break;
        }
    }

    if (pass)
        printf("Pass\n");
    else
        printf("Not Pass\n");

    return 0;
}