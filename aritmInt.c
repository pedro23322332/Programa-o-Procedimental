#include <stdio.h>

int main() 
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("42+34 = %d, 42-34 = %d, 42*34 = %d, 42/34 = %d, 42%%34 = %d", x+y, x-y, x*y, x/y, x%y);

    return 0;     
}