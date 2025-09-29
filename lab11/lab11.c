#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;

    // นับจำนวนหลัก
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        sum += (int)pow(d, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Pass\n");
    else
        printf("Not Pass\n");

    return 0;
}