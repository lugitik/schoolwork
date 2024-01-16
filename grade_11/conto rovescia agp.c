#include <stdio.h>

int main(){
    
    int n = 0;
    int i = 0;
    
    printf("Reverse number counter\nInsert number:\n");
    scanf("%d", &n);
    
    for(i=n; i>=0; --i){
        printf("%d\n", i);
    }
}