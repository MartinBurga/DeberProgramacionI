#include <stdio.h>
#include <math.h>

int numero;
int factorial;
int promedio;
int suma;
int numfactorial;

int main(){
    do
    {
        printf("Bienvenido a la calculadora de promedio de factoriales.\n");
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
            
            
        }
        

    } while (numero<=0);
    
    

}