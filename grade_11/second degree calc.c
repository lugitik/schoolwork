#include <stdio.h>
#include <math.h>

//function structure

void sol (float va, float vb, float vc)
{
    float del;
    
    //calculations
    
    if ((del = vb*vb - 4*va*vc) >= 0)
    {
        float x1 = ((-vb + sqrt(del)) / 2*va);
        float x2 = ((-vb - sqrt(del)) / 2*va);
        
        //output and logic for answering
        
        if (x1 == x2)
        {
            printf("\nX = %.2f\nThe delta is 0: there is only one solution.", x1);
        }
        else
        {
        printf("\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
        }
    }
    else
    {
        printf("\nThere are no solutions for this equation.");
    }
}

//inputs

int main()
{
    float va, vb, vc;
    
    printf("Second Degree Equation Calculator\n");
    printf("\nInsert variable a: ");
    scanf("%f", &va);
    printf("\nInsert variable b: ");
    scanf("%f", &vb);
    printf("\nInsert variable c: ");
    scanf("%f", &vc);
    
    sol (va, vb, vc);
    
    return 0;
}