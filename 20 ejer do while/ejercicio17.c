#include <stdio.h>
int main() {
    int n; // declarar variables 
    double i = 1, producto = 1.0;
    printf("\t\t-----EJERCICIO 17: Producto de una serie de numeros fraccionarios-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, producto = ", n);

    do {
        producto *= 1.0 / i; // Acumula el producto de las fracciones
        printf("1/%.0f * ", i); // Imprime la fracción
        i++;
    } while (i <= n);

    printf(" = %.6f\n", producto); // imprime producto final 
    
    return 0;

}