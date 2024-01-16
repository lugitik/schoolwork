#include <stdio.h>

int main(){
   
   int n = 0;
   int i = 0;
   
   printf("Even number counter\nInsert number:\n");
   scanf("%d", &n);
   
   for(i=0; i<=n; i=i+2){
       printf("%d\n", i);
   }
   
}
