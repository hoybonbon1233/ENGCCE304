#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) 
        return 0;
    }
    return 1;
}

int main() {
    int N;
    printf("Enter N :\n");
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    printf("Index: ");
    for (int i = 0; i < N; i++) {
        printf("%2d ", i);
    }
    printf("\nArray: ");
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i]))
            printf("%2d ", arr[i]);
        else
            printf(" # ");
    }
    printf("\n");
    return 0;
}