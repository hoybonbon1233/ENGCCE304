#include <stdio.h>
#include <stdlib.h>
int main() {
    int score ;
    int num , guess ;
    int Play ; 

    do {
        score = 100 ;
        num = rand() % 100 + 1 ;
        printf("Guess the winning number \n");
        while(1){
            printf("Enter Number (1-100) : \n");
            scanf("%d",&guess);
            
            if (guess == num ) {
                printf("That is correct! The winning number is %d.\n",num);
                printf("Your score this is : %d\n",score);
                break ;
            } else{ 
                score -= 10 ;
                if( guess < num) {
                    printf("sorry, the winning number is HIGHER than : %d\n",guess);
                } else{
                    printf("sorry, the winning number is Lower than : %d\n",guess);
                }
                printf("Your score this is : %d\n",score);
            }
        }

        printf("Do you want to play game (1=play,-1=exit)\n") ;
        scanf(" %d",&Play);
    
    } while(Play == 1 );
    printf("see you again .");
    return 0 ; 
}
