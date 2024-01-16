#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    time_t t;
    srand((unsigned) time(&t));
    int ran = rand() %21;
    int tr = 0;
    int yn = 0;
    int g = 0;
    
    printf("Let's play a game.\nI made a random number from 0-20, guess it within 5 tries to win.\n");
    printf("Do not put a number with decimals, or else you lose.\n");
    
    for(tr = 5; tr >= 0; tr--){
        
        printf("\nInsert number: ");
        scanf("%d", &g);
        
        if(g == ran){
            printf("\nCongratulations! You guessed it.\n");
            tr = 0;
            yn = 1;
        }
        
        if(g > ran && g <= 20){
            printf("\nToo high. You have %d tries left.\n", tr);
        }
        
        if(g < ran){
            printf("\nToo low. You have %d tries left.\n", tr);
        }
        
        if(g > 20){
            printf("\nI said 0-20. You just wasted a try.\n");
        }
    }
    
    if(yn == 0){
        printf("\nYou ran out of tries.\n");
    }
    
    printf("Game over.\n\n");
    
    return 0;
}
