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
            // Si el numero es positivo, se procederá sumar la respuesta que es 0, al numero insertado.
            // Una vez sumado se le restará 1 al numero insertado y la variable de "respuesta" adquiere
            // el valor previamente calculado. Nuevamente se hara la suma y se restará otra vez 1 al numero.

        } else if (numero<0)
        {
            while (numero<0)
            {
                respuesta=respuesta-numero;
                numero++;
            }
            printf("La suma de todos los terminos comprendidos entre 1 y el numero insertado es de: -%d\n", respuesta);
            printf("|.---------------------------------------------------------.|\n");
            //Mismo proceso y calculo que en la parte de arriba solo que en este se calcula la suma 
            // de valores negativos dando la oportunidad de sumar tanto numero positivos como negativos.
        }
        
        printf("Desearias volver a calcular la suma de terminos?\n");
        printf("1. Si por favor.\n");
        printf("0. No, es suficiente.\n");
        scanf("%d", &numero);
        printf("|.---------------------------------------------------------.|\n");
        //Finalmente, se le pregunta al usuario si desearia volver a calcular la suma de los terminos de un entero
        // o si desea poner fin al algoritmo.

    } while (numero!=0);
    
    printf("Gracias por utilizar el software! Nos vemos.\n");
    return 0;
}
