#include <stdio.h>
int main() {
    int n, i, sum = 0; 
    printf("\t\t-----EJERCICIO 19:Calcular el n-esimo numero triangular-----\n"); 
    printf("Ingresa un numero: ");  // le pedimos al usuario q ingrese un valor 
    scanf("%d", &n);

    printf("Si n = %d, el numero triangular es ", n);

    for (i = 1; i <= n; i++) {
        sum += i; // Sumamos cada número desde 1 hasta n
        if (i < n) {
            printf("%d + ", i); // Imprimimos cada número seguido de un signo de suma
        } else {
            printf("%d = %d\n", i, sum); // Imprimimos el último número y el resultado de la suma
        }
    }
    
return 0;
}