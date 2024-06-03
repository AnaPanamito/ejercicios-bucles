#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("\t\t-----EJERCICIO 7:Suma de una serie aritmetica-----\n");
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    printf("1 + 2 + 3 + ... + %d = ", n);

    for (i = 1; i <= n; i++) {  // bucle for con i igual a 1 y lo incrementamos en cada iteración hasta que i sea menor o igual a n
        sum += i; 
        printf("%d", i); // Imprimimos cada número
        if (i < n) {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);

return 0;
}