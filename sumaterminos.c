#include <stdio.h>
#include <math.h>

int numero;
int respuesta;

int main(){
    printf("Bienvenido a la suma de terminos de un numero entero\n");
    do
    {
        printf("Por favor, inserta un numero entero.\n");
        scanf("%d", &numero);

        if (numero>0)
        {
            while (numero>0)
            {
                respuesta=respuesta+numero;
                numero--;
            }
            printf("La suma de todos los terminos comprendidos entre 1 y el numero insertado es de: %d\n", respuesta);
            printf("|.---------------------------------------------------------.|\n");

        } else if (numero<0)
        {
            while (numero<0)
            {
                respuesta=respuesta-numero;
                numero++;
            }
            printf("La suma de todos los terminos comprendidos entre 1 y el numero insertado es de: -%d\n", respuesta);
            printf("|.---------------------------------------------------------.|\n");
        }
        
        printf("Desearias volver a calcular la suma de terminos?\n");
        printf("1. Si por favor.\n");
        printf("0. No, es suficiente.\n");
        scanf("%d", &numero);
        printf("|.---------------------------------------------------------.|\n");

    } while (numero!=0);
    
    printf("Gracias por utilizar el software! Nos vemos.\n");
    return 0;
}
