#include <stdio.h>

int main()
{
    int arr[4][3] = {0}, i, j; 
    float avg, sum = 0;

    arr[0][0] = 3, arr[0][1] = -5, arr[0][2] = 7;
    arr[1][0] = 4, arr[1][1] = 8, arr[1][2] = -1;
    arr[2][0] = 0, arr[2][1] = 2, arr[2][2] = 6;
    arr[3][0] = 9, arr[3][1] = 1, arr[3][2] = -6;
    
    printf("Line averages");
    
    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            sum = sum + arr[i][j];
        }
        
        avg = sum / 3;
        sum = 0;
        
        printf("\nThe average of line %d is: %0.1f", i+1, avg);
    }
    
    printf("\n\nColumn averages");
    
    for(j = 0; j < 3; ++j)
    {
        for(i = 0; i < 4; ++i)
        {
            sum = sum + arr[i][j];
        }
        
        avg = sum / 4;
        sum = 0;
        
        printf("\nThe average of column %d is: %0.1f", j+1, avg);
    }
    
    return 0;
}
