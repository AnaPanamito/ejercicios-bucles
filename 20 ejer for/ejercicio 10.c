#include <stdio.h>
int main() {
    int num, i; // declaramos variables 
    printf("\t\t-----EJERCICIO 10: Verificar si un numero es primo\n");
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d no es primo.\n", num);
    } else {
// En el bucle for con i igual a 2 y lo incrementamos en cada iteración hasta que i sea menor o igual a la mitad del número ingresado.
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                printf("%d no es primo.\n", num);
                //Si el bucle for termina sin encontrar un divisor, imprimimos un mensaje indicando que el número es primo.
                return 0;
            }
        }
        printf("%d es primo.\n", num);
    }
    
return 0;
}