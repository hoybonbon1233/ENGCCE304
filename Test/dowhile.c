#include <stdio.h>
int main() {
    int N ;
    printf( "Enter Number: " ) ;
    scanf( "%d",&N ) ;

    int i = N ;
    do {
        int prime = 1 ;  
        if (i == 2) {
            prime = 1 ;
        } else {
            int n = 2 ;
            do {
                if  ( i % n == 0 ) {
                    prime = 0 ; 
                }
                n++ ;
            } while ( n <= i / 2 ) ;
        }
        if ( prime ) {
            printf( "%d ", i ) ;
        }
        i-- ; 
    } while ( i >= 2 ) ;//end do while
    return 0 ;
}//end main functions