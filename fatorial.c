#include <stdio.h>
#include <stdint.h>

    int main(){
    int x, laco, acumulativa, y;
    int64_t fat;
  
    printf("Digite um numero inteiro maior do que 1:");
    scanf("%d", &x);

    acumulativa = x - 1;
    y = x;
    fat = 1;
    for(laco = 0 ;laco < x - 1; laco++){
        fat = fat*y*acumulativa;   
        acumulativa--;
        y = 1;
     }

    printf("%lld", fat); 

        
    return 0;
}