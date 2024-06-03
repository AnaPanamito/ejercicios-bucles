#include <stdio.h>
int main() {
    int n, i = 1, suma = 0;
    printf("\t\t-----EJERCICIO 20: Calcular la suma de los factoriales de los primeros n numeros-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, suma = ", n);

    do {
        int factorial = 1, j = 1;
        while (j <= i) { //calcula el factorial de i 
            factorial *= j;
            j++;
        }
        suma += factorial; // acumula la suma de los factoriales 
        printf("%d! + ", i); // imprime factorial de i 
        i++;
    } while (i <= n);

    printf(" = %d\n", suma); // imprime resultado 
    return 0;
}