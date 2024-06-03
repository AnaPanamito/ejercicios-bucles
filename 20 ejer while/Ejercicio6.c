#include <stdio.h>

int main() {
    int num, i, factorial = 1;
    printf("\t\t-----EJERCICIO 6: Factorial de un numero-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("%d! = ", num);
    i = num;
    do {
        printf("%d", i); // Imprimimos el factor actual
        if (i > 1) {
            printf(" * "); // Imprimimos el signo de multiplicación entre los factores
        }
        factorial *= i; // Multiplicamos factorial por el factor actual
        i--; // Decremento i para obtener el siguiente factor
    } while (i >= 1);
    printf(" = %d\n", factorial);
    return 0;
}
