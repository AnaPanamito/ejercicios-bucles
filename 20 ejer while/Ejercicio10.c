#include <stdio.h>

int main() {
    int num, i = 2;
    printf("\t\t-----EJERCICIO 10: Verificar si un numero es primo-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num <= 1) { // Los números menores o iguales a 1 no son primos
        printf("%d no es primo.\n", num);
    } else {
        do {
            if (num % i == 0) {  // Si el número es divisible por i, entonces no es primo
                printf("%d no es primo.\n", num);
                return 0;
            }
            i++;
        } while (i <= num / 2); // solo sera necesario comprobara hasta que la mitad del numero 
        printf("%d es primo.\n", num); // Si no se encontró ningún divisor, el número es primo
    }
    return 0;
}
