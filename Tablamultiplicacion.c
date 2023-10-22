#include <stdio.h>
#include <math.h>

int numero;
int producto;

int main(){
    printf("Bienvenido a la calculadora de tablas de multiplicacion.\n");
    while (numero<1 || numero>0)
    {
        printf("Por favor, inserta un numero entre 1-10 para determinar su respectiva tabla de multiplicacion\n");
        scanf("%d", &numero);  
    }
    
    
    return 0;
}