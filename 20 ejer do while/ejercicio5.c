#include <stdio.h>
int main() {
    int n, i = 0;
    int a = 0, b = 1, c;
    printf("\t\t-----EJERCICIO 5: Serie de Fibonacci-----\n");
    printf("Ingrese la cantidad de numeros de Fibonacci que quieres generar: ");
    scanf("%d", &n);
    printf("Los primeros %d numeros de Fibonacci son:\n", n);
    do {
        printf("%d ", a); // Imprimimos el número de Fibonacci actual
        c = a + b; // Calculamos el siguiente número de Fibonacci
        a = b; // Actualizamos a con el valor de b
        b = c; // Actualizamos b con el valor de c
        i++;
    } while (i < n);
    printf("\n"); // Después del bucle, imprimimos una nueva línea.

    return 0;

}