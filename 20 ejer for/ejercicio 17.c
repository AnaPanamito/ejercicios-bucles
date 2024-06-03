#include <stdio.h>
int main() {
    int n; 
    double i, product = 1.0; // Declaramos las variables i para usar en el bucle for y product para almacenar el producto de la serie de números fraccionarios
    printf("\t\t-----EJERCICIO 17:Producto de una serie de numeros fraccionarios-----\n"); 
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, producto = ", n);

    for (i = 1; i <= n; i++) {
        product *= 1.0 / i; // Multiplicamos cada término de la serie
        printf("1/%.0f * ", i); // Imprimimos cada término de la serie
    }

    printf(" = %.6f\n", product); // Imprimimos el resultado del producto con 6 decimales
     
return 0;
}