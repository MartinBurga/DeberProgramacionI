#include <stdio.h>
#include <math.h>

int numero;
int producto;
int opcion;

int main() {
    do {
        printf("Bienvenido a la calculadora de tablas de multiplicacion.\n");
        opcion = 1;

        do {
            printf("Inserta un entero entre 1-10 para determinar su respectiva tabla de multiplicacion\n");
            scanf("%d", &numero);
            if (numero < 1 || numero > 10) {
                printf("El numero insertado no esta dentro del rango de 1-10. Vuelve a intentarlo.\n");
            }
            //Controlador ante un posible ingreso de numeros mayores a 10 o menores a 1. Este se repetirá
            // Hasta que el usuario inserte un valor dentro del rango preestablecido.

        } while (numero < 1 || numero > 10);

        printf("La tabla del %d es:\n", numero);
        for (int i = 1; i <= 10; i++) {
            producto = numero * i;
            printf("%d x %d = %d\n", numero, i, producto);
        }
        //Se imprimirá la tabla del numero. El proceso es basicamente que se imprime siempre el numero insertado
        // pero existe una variable "i" que ira aumentando cada vez que se haga una multiplicación. Esta actuará
        // de multiplicador hasta llegar al valor de menor igual a 10.

        do
        {
            printf("||---------------------------------------------||\n");
            printf("Deseas calcular otra tabla de multiplicar?\n");
            printf("1. Si, por favor.\n");
            printf("0. No, es suficiente.\n");
            printf("||---------------------------------------------||\n");
            scanf("%d", &opcion);
            if (opcion!=0 && opcion!= 1)
            {
                printf("Opcion no valida. Por favor, inserta una opcion valida.\n");
            }
            
            //Finalmente se le ofrece al usuario la capacidad de volver a calcular las tablas pero de otro numero.
            // En este, existe un controlador de respuesta que evita una respuesta que no sea 0 o 1.

        } while (opcion !=0 && opcion !=1);
        

        if (opcion == 0) {
            printf("Gracias por utilizar el algoritmo. Nos vemos!\n");
        }
    } while (opcion == 1);

    return 0;
}
