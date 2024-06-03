#include <stdio.h>
int main() {
    int n, i, suma = 0; // Declaramos las variables n, i y sum
    printf("\t\t-----EJERCICIO 12:Sumar los numeros impares hasta n-----\n"); 
    printf("Ingrese un numero: ");
    scanf("%d", &n); // Solicitamos al usuario que ingrese un número

    for (i = 1; i <= n; i += 2) { // Iniciamos el bucle for con i = 1 y lo incrementamos en 2 en cada iteración
        suma += i; // Sumamos el valor actual de i a sum
        printf("%d + ", i); // Imprimimos el valor actual de i seguido de un signo de suma y un espacio
    }

    printf(" = %d\n", suma); // Imprimimos el resultado de la suma
    
return 0;
}