#include <stdio.h>
int main() {
    int n, i, sum = 0; // Declaramos las variables n, i y sum
    printf("\t\t-----EJERCICIO 13:Sumar los numeros pares hasta n-----\n"); 
    printf("Ingrece un numero: ");
    scanf("%d", &n); // Solicitamos al usuario que ingrese un número

    printf("Si n = %d, suma = ", n); // Imprimimos el mensaje inicial

    // Iniciamos el bucle for con i igual a 2 y lo incrementamos en 2 en cada iteración
    // para asegurarnos de que solo consideramos números pares hasta n
    for (i = 2; i <= n; i += 2) {
        sum += i; // Sumamos el valor actual de i a sum
        printf("%d", i); // Imprimimos el valor actual de i
        if (i < n) { // Si i es menor que n, imprimimos un signo de suma y un espacio
            printf(" + ");
        }
    }

    printf(" = %d\n", sum); 
      
return 0;
}