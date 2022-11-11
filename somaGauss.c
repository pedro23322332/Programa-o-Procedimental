#include <stdio.h>
    int main()
{
    int x, somaGauss, laco, acumulativa;
    printf("Digite um numero inteiro maior do que 1:");
    scanf("%d", &x);

    for(laco = 0, acumulativa = 1, somaGauss = 1; laco < x - 1; acumulativa++, laco++)
     {
        somaGauss = somaGauss + acumulativa + 1;               
     }
    printf("%d", somaGauss); 

        
    return 0;
}
