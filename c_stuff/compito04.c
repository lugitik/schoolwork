#include <stdio.h>
int main()
{
	int i;
	int min;
	int max;
    int ar[8]={3,2,6,5,4,7,8,1};
           for (i=0;i<5;i++) {
              if (i==0) {
                 min=ar[i];
                 max=ar[i];
                        }
                       if (ar[i]<min) min=ar[i];
                       if (ar[i]>max) max=ar[i];
                            }
               printf("Minimo = %d \n", min );
               printf("Massimo = %d \n", max );
                return 0;
}
