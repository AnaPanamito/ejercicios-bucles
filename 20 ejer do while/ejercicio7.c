#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("\t\t-----EJERCICIO 7: Suma de una serie aritmetica-----\n");
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    printf("1 + 2 + 3 + ... + %d = ", n);

    do {
        sum += i; // sumamos 
        printf("%d", i); //imprimimos i 
        if (i < n) {
            printf(" + "); // Imprimimos el signo de suma si i es menor que n
        }
        i++; // Incrementamos i para obtener el siguiente término
    } while (i <= n);
    printf(" = %d\n", sum);

    return 0;

}