#include <stdio.h>
int main() {
    int n, i, sum = 0; // declaramos variables 
    printf("\t\t-----EJERCICIO 14: Suma de los cuadrados de los primeros n numeros-----\n"); 
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, suma = ", n);

    for (i = 1; i <= n; i++) {
        sum += i * i; // Sumamos el cuadrado de cada número
        printf("%d^2 + ", i); // Imprimimos el cuadrado de cada número
    }

    printf(" = %d\n", sum); // Imprimimos el resultado de la suma
         
return 0;
}