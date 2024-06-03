#include <stdio.h>

int main() {
    int n, i = 1, suma = 0;
    printf("\t\t-----EJERCICIO 19: Calcular el n-esimo numero triangular-----\n");
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, el numero triangular es ", n);

    do {
        suma += i; // acumula la suma de los numeros 
        if (i < n) {
            printf("%d + ", i); //imprime el numero y el separador 
        } else {
            printf("%d = %d\n", i, suma); // emprime el ultimo numero y la suma final 
        }
        i++;
    } while (i <= n);

    return 0;

}