#include <stdio.h>

void vswap(int v1, int v2)
{
    int temp = v1;
    v1 = v2;
    v2 = temp;
    
    printf("\nWith value swap: %d and %d", v1, v2);
}

void rswap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int n1 = 10, n2 = 20;
    
    vswap(n1, n2);

    rswap(&n1, &n2);
    printf("\nWith reference swap: %d and %d", n1, n2);

    return 0;
}
