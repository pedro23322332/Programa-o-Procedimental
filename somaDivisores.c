#include <stdio.h>
#include <math.h>

int main(){   
    int laco, somaDivisores = 0, x;
  
    printf("Informe um numero inteiro positivo:\n");
    scanf("%d", &x);
  
    for(laco = 1; laco <= x; laco++){
        if(x%laco == 0){
            somaDivisores = somaDivisores + laco;
        };
    };                  
     
    printf("%d", somaDivisores);
  
    return 0;
}