#include <stdio.h>

int numero;
int esprimo;

int main(){

    printf("Bienvenido a la calculadora de numeros primos\n");

    do
    {
        printf("Por favor, inserte un numero entero positivo.\n");
        scanf("%d", &numero);
        esprimo=1;
        if (numero>1)
        {
            for (int i = 2; i <= numero/2; i++)
            {
                if (numero%1==0)
                {
                    esprimo=0;
                }
                
            }
            
        }
        
    } while (numero>0);

    return 0;
}