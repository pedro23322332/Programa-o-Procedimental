#include <stdio.h>
int main() {

  int i, n;

  
  int t1 = 0, t2 = 1;

  
  int prox = t1 + t2;

  
  printf("Digite o numero de termos: ");
  scanf("%d", &n);

  if(n == 1){
    
    printf("Fibonacci: %d ", t1);
  }
  else{
    printf("Fibonacci: %d, %d, ", t1, t2);
  }
  

  
  for (i = 3; i <= n ; ++i) {
    printf("%d, ", prox);
    t1 = t2;
    t2 = prox;
    prox = t1 + t2;
  }

  return 0;
}