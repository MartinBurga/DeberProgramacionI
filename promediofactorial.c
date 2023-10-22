#include <stdio.h>
#include <math.h>

int numero;
int factorial;
int promedio;
int suma;
int numfactorial;
int opcion;

int main(){
    printf("Bienvenido a la calculadora de promedio de factoriales.\n");
    do
    {
        printf("Por favor, inserta un numero entero positivo\n");
        scanf("%d", &numero);
        for (int i = 1; i <= numero; i++) 
        {
            factorial=1;
            for (int a = i; a <=i; a++) 
            {
                factorial=factorial*a;
                suma=suma+factorial;
                numfactorial++;
            }
            suma=suma+factorial;
            numfactorial++;
        }
        promedio=suma/numfactorial;
        printf("El promedio de factoriales del numero insertado es de: %d\n", promedio);
        printf("||-------------------------------------------------------||\n");
        do
        {
            printf("Deseas calcular el promedio de factoriales de otro numero?\n");
            printf("1. Si, por favor.\n");
            printf("0. No, es suficiente.\n");
            scanf("%d", &opcion);
            if (opcion!=0 && opcion!=1)
            {
            printf("Opcion no valida. Intentalo de nuevo.\n");
            }
        } while (opcion!=0 && opcion!=1);
        
        if (opcion==0)
        {
            printf("Gracias por utilizar el algoritmo\n");
            break;
        }
        
    } while (opcion == 1);

    return 0;
}