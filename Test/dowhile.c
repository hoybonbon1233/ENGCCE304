#include <stdio.h>

int main() {
    int N ;

    printf( "Enter Number: " ) ;
    scanf( "%d",&N ) ;

    int i = N ;
    do {
        int prime = 1 ;   
        int n = 2 ;
        do {
            if ( i % n == 0 ) {  
                prime = 0 ;  
                break ;      
            }
            n++ ;
        } while ( n <= i / 2 ) ;
        if ( prime ) {
            printf( "%d ", i ) ;
        }
        i-- ;  
    } while ( i >= 2 ) ;  // end do/while
    return 0 ;
} // end main function
