#include <stdio.h>

int main(){
    
    int pr = 12;
    int hours = 0;
    int final = 0;
    int bonus = 0;
    int grossb = 0;
    float tax = 0;
    
    printf("Insert your work hours to calculate your pay: \n");
    scanf("%d", &hours);
    
    int gross = pr * hours;
    
    if(hours > 40){
        
        printf("Congratulations! You got a bonus for your overtime. \n");
        bonus = (hours - 40) * (pr / 2);
        grossb = gross + bonus;
        
        if(gross < 300){
            tax = 0.15;
            final = grossb - (grossb * tax);
        }
        if(gross > 300 && gross < 450){
            tax = 0.2;
            final = grossb - (grossb * tax);
        }
        if(gross > 450){
            tax = 0.25;
            final = grossb - (grossb * tax);
        }
        
        printf("Your gross with bonus is: $%d \n", grossb);
        
    }else{
        
        if(gross < 300){
            tax = 0.15;
            final = gross - (gross * tax);
        }
        if(gross > 300 && gross < 450){
            tax = 0.2;
            final = gross - (gross * tax);
        }
        if(gross > 450){
            tax = 0.25;
            final = gross - (gross * tax);
        }
        
        printf("Your gross is: $%d \n", gross);
        
    }

    printf("Your tax is: %.2f percent \n", tax);
    printf("Your pay is: $%d \n", final);

    return 0;
    
}