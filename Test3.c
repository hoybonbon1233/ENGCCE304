#include <stdio.h>
int main(){
    int choice , money , price = 0 ;
    printf( "===Vending Machine===\n" ) ;
    printf( "0. Coke 10 baht\n" ) ;
    printf( "1. Green soda 12 baht\n" ) ;
    printf( "2. Americano 30 baht\n" ) ;
    printf( "3. Latae 35 baht\n" ) ;
    printf( "4. Sunflower seed 13 baht\n" ) ;
    printf( "5. Bean 20 baht\n" ) ;
    printf( "6. Pork 15 baht\n" ) ;
    scanf( "%d", &choice ) ;
    
    switch(choice){
        case 0 :
        price = 10 ;
        printf( "Coke 10 baht\n",price ) ;
        break ;
         case 1 :
        price = 10 ;
        printf( "Coke 10 baht\n",price ) ;
        break ;
         case 2 :
        price = 10 ;
        printf( "Coke 10 baht\n",price ) ;
        break ;
         case 3 :
        price = 10 ;
        printf( "Coke 10 baht\n",price ) ;
        break ;
         case 4 :
        price = 10 ;
        printf( "Coke 10 baht\n",price ) ;
        break ;
         case 5 :
        price = 10 ;
        printf( "Coke 10 baht\n",price ) ;
        break ;
         case 6 :
        price = 10 ;
        printf( "Coke 10 baht\n",price ) ;
        break ;
        default :
        printf( "=================\n" ) ;
        printf( " We Don't have Your Choice" ) ;
        break ;
    }
    return 0 ;

    printf( " Please put your money in :\n" ) ;
    scanf( "%d",&money ) ;
    if( money >= price ){
        int change = money - price ;
        printf("Receive Your Drinks");
            if(change > 0) {
                printf("Your change is %d baht\n",change);
            }
            printf("thanks for using\n") ;
    } else {
        printf("Don't have enough money . please put money in  ");
    }
    return 0 ;
}
zzz
