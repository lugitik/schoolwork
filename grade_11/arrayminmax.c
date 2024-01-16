#include <stdio.h>

int main()
{
	int i, min, max;
	int ar[8] = {1,93247,32423,2343,4,3483432,443,3248};
           
    for (i=0;i<8;i++)
    {
        
        if (i==0) 
        {
            min=ar[i];
            max=ar[i];
        }
        
        if (ar[i]<min)
        {
            min=ar[i];
                       
            if (ar[i]>max)
            {
                max=ar[i];
            }    
        }
    }
    
    printf("Minimo = %d \n", min );
    printf("Massimo = %d \n", max );
    
    return 0;
}
