#include <stdio.h>
#include <math.h>
int main() {
    int num1 , num2 , num3 , sum ;

    printf("Enter Value 1 : \n") ;
    scanf("%d", &num1) ;
    printf("Enter Value 2 : \n") ;
    scanf("%d", &num2) ;
    printf("Enter Value 3 : \n") ;
    scanf("%d", &num3) ;

    sum = num1 + num2 + num3 ;

    printf("Sum = %d\n", sum) ;

    return 0 ;
}