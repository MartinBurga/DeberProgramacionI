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
        // Se declara y se inicializa dos variables: i & a. Una se encargara de contar el numero de factoriales
        // que tenga el numero insertado mientras que la otra sera el multiplicador que ira multiplicando al numero
        // Ambas iran sumandose 1 a la vez. Para al final irse sumandose los factoriales.

        promedio=suma/numfactorial;
        printf("El promedio de factoriales del numero insertado es de: %d\n", promedio);
        printf("||-------------------------------------------------------||\n");

        // A base del contador previamente añadido y la suma del producto de los factoriales es que se determina
        // el promedio de los factoriales con la simple division de la suma de los factoriales sobre el numero de 
        // factoriales existentes. 

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
        
        // Pequeño menu que ofrece al usuario la capacidad de volver a insertar un numero y nuevamente determinar
        // el promedio de dichos factoriales. 
        
    } while (opcion == 1);

    return 0;
}