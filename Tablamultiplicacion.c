#include <stdio.h>
#include <math.h>

int numero;
int producto;

int main(){
    printf("Bienvenido a la calculadora de tablas de multiplicacion.\n");
    while (numero<1 || numero>10)
    {
        printf("Inserta un entero entre 1-10 para determinar su respectiva tabla de multiplicacion\n");
        scanf("%d", &numero);  
        if (numero<0 || numero>10)
        {
            printf("El numero insertado no esta dentro del rango de 1-10. Vuele a intentarlo.\n");
        }  
        
    }
    
    printf("La tabla de %d es:\n", numero);
    for (int i = 1; i <= 10; i++)
    {
        producto=numero*i;
        printf("%d x %d = %d\n", numero, i, producto);
    }

    
    return 0;
}