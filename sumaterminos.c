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

        } else if (numero<0)
        {
            while (numero<0)
            {
                respuesta=respuesta-numero;
                numero++;
            }
            printf("La suma de todos los terminos comprendidos entre 1 y el numero insertado es de: -%d\n", respuesta);
        }
        
    } while (numero!=0);
    
    return 0;
}
