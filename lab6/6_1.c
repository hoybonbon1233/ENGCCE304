#include <stdio.h>

int main() {
    int num;
    char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    printf("Enter a number (0-9): ");
    scanf("%d", &num);

    int found = 0;
    for (int i = 0; i < 10; i++) {
        if (num == i) {
            printf("%s\n", words[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Out of range\n");
    }
    return 0;
}
