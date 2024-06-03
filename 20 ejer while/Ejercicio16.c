#include <stdio.h>

int main() {
    int n; //declarar variables 
    double i = 1, suma = 0.0; 
    printf("\t\t-----EJERCICIO 16: Suma de una serie de numeros fraccionarios-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, suma = ", n);

    do {
        suma += 1.0 / i; // Acumula la suma de las fracciones
        printf("1/%.0f + ", i); // Imprime la fracción
        i++;
    } while (i <= n);

    printf(" = %.2f\n", suma); 

    return 0;

 }