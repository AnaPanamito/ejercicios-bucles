#include <stdio.h>
int main() {
    int n, i, sum = 0; // declaramos variables 
    printf("\t\t-----EJERCICIO 20: Calcular la suma de los factoriales de los primeros n numeros-----\n"); 
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, suma = ", n);

    for (i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j; // Calculamos el factorial de cada número
        }
        sum += factorial; // Sumamos el factorial de cada número
        printf("%d! + ", i); // Imprimimos el factorial de cada número
    }

    printf(" = %d\n", sum); // Imprimimos el resultado de la suma

    return 0;
}