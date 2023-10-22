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
            num1=num1/10;
        }
        
        // Basicamente el proceso que se hace aqui es que con el "%10" se va como, por decirlo de una forma,
        // "separando los terminos" y con el comando de if es que se determina si es un numero primo. 
        // Si es que es un numero primo, entonces se suma 1 al contador. La variable x1 y x2 son almacenadores
        // temporales de los numeros que su funcion es unicamente la de guardar el numero para comparar si es
        // primo o no. 

        contador2=0;
        while (num2>0)
        {
            int x2=num2%10;
            if (x2==2 || x2==3 || x2==5 || x2==7)
            {
                contador2++;
            }
            num2=num2/10;
        }

        // Mismo proceso y estructura pero ahora con el contador 2 que pertenece al 2do numero insertado por
        // el usuario. Se le divide para 10 para una vez que se haya comprobado si es primo o no, pase al siguiente
        // termino del numero entero. 

        if (contador1>contador2)
        {
            printf("El primer numero entero insertado es el numero con mas numeros primos en sus digitos.\n");
        } else if (contador1<contador2)
        {
            printf("El segundo numero entero insertado es el numero con mas numeros primos en sus digitos.\n");
        } else {
            printf("Ambos numeros insertados tienen la misma cantidad de numeros primos.\n");
        }
        
        printf("Deseas volver a digitar otros numeros y compararlos?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &opcion);
        if (opcion==2)
        {
            printf("Gracias por utilizar el algoritmo. Ten un buen dia:)");
        }
        

    } while (opcion==1);
    
    
    return 0;
}