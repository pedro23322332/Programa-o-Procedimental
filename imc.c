#include <stdio.h>
#include <math.h>

int main()
{
    printf("Informe o peso (em kgs), e apos clicar ENTER digite a altura em metros ( use '.' no lugar da ','):\n");
    float peso, altura, IMC;
    scanf("%f", &peso);
    scanf("%f", &altura);
    IMC = peso/(altura*altura);
    if ((IMC < 16))
        printf("%.2f (Risco de Vida)", IMC);
        else if ((IMC >=16 && IMC < 17))
            printf("%.2f (Muito abaixo do peso)", IMC);
            else if ((IMC >=17 && IMC < 18.5))
                printf("%.2f (Abaixo do peso)", IMC);
                else if((IMC >= 18,5 && IMC < 25))
                    printf("%.2f (Peso normal)", IMC);
                    else if((IMC >= 25 && IMC < 30))
                        printf("%2.f (Acima do peso)", IMC);
                        else if((IMC >= 30 && IMC < 35))
                            printf("%.2f (Obesidade grau I)", IMC);
                            else if((IMC >= 35 && IMC < 40))
                                printf("%.2f (Obesidade grau II)", IMC);
                                    else if((IMC >= 40 ))
                                        printf("%.2f (Obesidade grau III)", IMC);






    return 0;
}