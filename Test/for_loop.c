#include <stdio.h>
int main() {
    int N ;
    printf( "Enter Number: " ) ;
    scanf( "%d",&N ) ;

    for ( int i = N ; i >= 2 ; i-- ) {
        int prime = 1 ; 
        for ( int n = 2 ; n <= i / 2 ; n++ ) { 
            if ( i % n == 0 ) {
                prime = 0 ;     
            }
        } if ( prime == 1 ) { 
            printf( " %d ",i ) ;
        }
    }//end for loop
    return 0 ;
}//end main function
