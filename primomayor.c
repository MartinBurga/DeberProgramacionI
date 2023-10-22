#include <stdio.h>
#include <math.h>

int num1, num2;
int contador1, contador2;
int opcion;

int main(){
    printf("Bienvenido al comparador de numeros primos por digitos.\n");
    do
    {
        printf("Inserta un primer numero entero.\n");
        scanf("%d", &num1);
        printf("Inserta un segundo numero entero.\n");
        scanf("%d", &num2);
        contador1=0;
        while (num1>0)
        {
            int x1=num1%10;
            if (x1==2 || x1==3 || x1==5 || x1==7)
            {
                contador1++;
            }
            
        }
        
        //Basicamente el proceso que se hace aqui es que con el "%10" se va como, por decirlo de una forma,
        // "separando los terminos" y con el comando de if es que se determina si es un numero primo. 
        //Si es que es un numero primo, entonces se suma 1 al contador.

    } while (opcion==1);
    
    
    return 0;
}