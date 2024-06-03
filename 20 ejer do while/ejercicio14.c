#include <stdio.h>
int main() {
    int n, i = 1, suma = 0;
    printf("\t\t-----EJERCICIO 14: Suma de los cuadrados de los primeros n numeros-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, suma = ", n);

    do {
        suma += i * i; // Acumula la suma de los cuadrados
        printf("%d^2 + ", i); // Imprime el cuadrado del número
        i++;
    } while (i <= n);

    printf(" = %d\n", suma); // imprime el resultado 
    
    return 0;

}