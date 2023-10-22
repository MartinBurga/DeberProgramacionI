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

    } while (numero>0);
    

    return 0;
}
