#include <stdio.h>

int main(){
    
    int a, b, c, d, i, mcd, mcm;
    int dv = 1;
    
    printf("Least Common Multiple Calculator\n\nInsert a number: ");
    scanf("%d", &a);
    printf("\nInsert a second number: ");
    scanf("%d", &b);
    
    c = a;
    d = b;

    //verifica del resto//

    do{
        
        if (a > b){
            
            dv = a % b;
            
            if (dv > 0){
                a = a + c; 
            }
            
        }
        else if (a < b){
            
            dv = b % a;
            
            if (dv > 0){
                b = b + d;
            }
            
        }
        else{
            
            dv = a % b;
            
        }
    }while(dv > 0);
    
    //calcolo del massimo comune divisore//
    
    for (i = 1; i <= a && i <= b; i++){
        
        if(a % i == 0 && b % i == 0){
            
            mcd = i;
        
        }
        
    }
    
    //calcolo del mcm//
    
    mcm = (a * b) / mcd;
    
    printf("\nThe least common multiple between %d and %d is: %d", c, d, mcm);
    
}
