#include <stdio.h>
int main() {
    int n, i;   //  n para almacenar la cantidad de números de Fibonacci, i para usar en el bucle for
    int a = 0, b = 1, c;  // a, b, c para almacenar los valores de la serie.
    printf("\t\t-----EJERCICIO 5:Serie de Fibonacci-----\n");
    printf("Ingrese la cantidad de numeros de Fibonacci que quieres generar: ");
    scanf("%d", &n);
    printf("Los primeros %d numeros de Fibonacci son:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", a);  //  imprimimos el valor actual de a, que corresponde a un número de Fibonacci. 
        c = a + b;   // Calculamos el siguiente número de Fibonacci sumando a y b, y almacenamos el resultado en c.
        a = b;       // Actualizamos a con el valor de b y b con el valor de c, preparando los valores 
        b = c;
    }
    printf("\n");
return 0;
}