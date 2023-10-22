#include <stdio.h>

int numero;
int esprimo;

int main(){

    printf("Bienvenido a la calculadora de numeros primos.\n");

    do
    {
        do
        {
            printf("Por favor, inserte un numero entero positivo.\n");
            printf("Inserta ""0"" si deseas salir\n");
            scanf("%d", &numero);
            if (numero<0)
            {
                printf("El numero insertado debe ser un entero positivo. Vuelve a intentarlo.\n");
                printf("|--------------------------------------------|\n");
            }
            
            // Se pone un controlador que regula que el numero entero sea un positivo //

        } while (numero<0);

        if (numero==0)
        {
            printf("Gracias por utilizar el software! Nos vemos.\n");
            printf("|--------------------------------------------|\n");
        } else if (numero==1)
        {
            printf("El numero 1 NO es un numero primo.\n");
            printf("|--------------------------------------------|\n");
        }

        // Como opción de salida finalgoritmo se le ofrece al usuario presionar 0 para salir.

        // Controlador de numero primo: Si el usuario inserta el numero 1, automaticamente se lanza
        // el mensaje de que es un numero no primo.

        if (numero>1)
        {
            esprimo=1;
            for (int i = 2; i <= numero/2; i++)
            {
                if (numero%i==0)
                {
                    esprimo=0;
                    break;
                } 
            }
            if (esprimo)
            {
            printf("El numero %d SI es un numero primo.\n", numero);
            printf("|--------------------------------------------|\n");
            } else
            {
            printf ("El numero %d NO es un numero primo.\n", numero);
            printf("|--------------------------------------------|\n");
            }
        }

        // Se determina si el numero insertado es un numero primo o no con el operador mod (%).
        // Finalmente se imprime la respuesta.
  
    } while (numero>0);

    return 0;
}