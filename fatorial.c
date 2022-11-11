#include <stdio.h>

    int main()
{
    long int x, laco, fat, acumulativa, y;
    printf("Digite um numero inteiro maior do que 1:");
    scanf("%d", &x);
    
    for(laco = 0, y = x, acumulativa = x - 1 , fat = 1; laco < x - 1; acumulativa--, y = 1, laco++)
     {
        fat = fat*y*acumulativa;              
     }

    printf("%d", fat); 

        
    return 0;
}