#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("\t\t-----EJERCICIO 15:Suma de los cubos de los primeros n numeros-----\n"); 
    printf("Ingrese un numero: "); // le pedimos al isuario q ingrese un numero 
    scanf("%d", &n);

    printf("Si n = %d, suma = ", n);

    for (i = 1; i <= n; i++) {
        sum += i * i * i; // Sumamos el cubo de cada número
        printf("%d^3 + ", i); // Imprimimos el cubo de cada número
    }

    printf(" = %d\n", sum); // Imprimimos el resultado de la suma
       
return 0;
}