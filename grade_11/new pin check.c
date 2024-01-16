#include <stdio.h>

int main(){
    
    int p = 1234; 
    int ins = 0;
    int pnv = 0;
    int con = 0;
    
    printf("Conferma PIN per cambiarlo: \n");
    scanf("%d", &ins);
    
    if(ins == p){
    
        printf("PIN Valido. Inserisci nuovo PIN: \n");
        scanf("%d", &pnv);
        printf("Conferma nuovo PIN: \n");
        scanf("%d", &con);
        
        if(con == pnv){
            printf("Nuovo PIN confermato: %d", pnv);
        }else{
            printf("Conferma nuovo PIN fallita.");
        }
    
    }else{
    
        printf("Conferma fallita.\n");
        
    }

    return 0; 
    
}
