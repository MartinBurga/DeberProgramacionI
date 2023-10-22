#include <stdio.h>
#include <math.h>

int numero;
int producto;

int main(){
    printf("Bienvenido a la calculadora de tablas de multiplicacion.\n");
    while (numero<1 || numero>10)
    {
        printf("Por favor, inserta un numero entre 1-10 para determinar su respectiva tabla de multiplicacion\n");
        scanf("%d", &numero);  
    }
    
    printf("La tabla de %d es:\n", numero);
    for (int i = 1; i <= 10; i++)
    {
        producto=numero*i;
        printf("%d x %d = %d\n", numero, i, producto);
    }
    
    return 0;
}