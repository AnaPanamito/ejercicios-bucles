#include <stdio.h>
int main() {
    int n, i = 1, suma = 0;
    printf("\t\t-----EJERCICIO 15: Suma de los cubos de los primeros n numeros-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, suma = ", n);

    do {
        suma += i * i * i; // Acumula la suma de los cubos
        printf("%d^3 + ", i); // Imprime el cubo del número
        i++;
    } while (i <= n);

    printf(" = %d\n", suma); // imprime resultado 
    
    return 0;

}