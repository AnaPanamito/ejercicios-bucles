#include <stdio.h>
int main() {
    int n;
    double i, sum = 0.0; // Utilizamos double para i y sum para manejar números decimales.
     printf("\t\t-----EJERCICIO 16: Suma de una serie de numeros fraccionarios-----\n"); 
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, suma = ", n);

    for (i = 1; i <= n; i++) {
        sum += 1.0 / i; // Sumamos cada término de la serie
        printf("1/%.0f + ", i); // Imprimimos cada término de la serie
    }

    printf(" = %.2f\n", sum); // Imprimimos el resultado de la suma con 6 decimales
    
return 0;
}