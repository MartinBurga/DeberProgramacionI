#include <stdio.h>

int numero;
int esprimo;

int main(){

    printf("Bienvenido a la calculadora de numeros primos\n");

    do
    {
        printf("Por favor, inserte un numero entero positivo.\n");
        scanf("%d", &numero);
    } while (numero>0);
    
  
    return 0;
}