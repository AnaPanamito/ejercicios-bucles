#include <stdio.h>
int main() {
    int n, i;
    long long producto = 1; //utilizao 'long long' para manejar valores grandes
    int primer_termino = 2; // para almacenar el primer término de la serie (en este caso, 2).
    printf("\t\t-----EJERCICIO 8:Producto de una serie geometrica-----\n");
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    printf("Producto de los primeros %d terminos de la serie geometrica: ", n);

    for (i = 1; i <= n; i++) {
        producto *= primer_termino; // Dentro del bucle, multiplicamos el valor actual de producto por el primer_termino.
        printf("%d", primer_termino);
        if (i < n) {
            printf(" * "); // Imprimimos el valor actual del primer_termino. Si i es menor que n, también imprimimos un asterisco (*) para separar los términos.
        }
        primer_termino *= 2; // Multiplico primer_termino por 2 para obtener el siguiente término de la serie geométrica.
    }

    printf(" = %lld\n", producto); //  utilizo %lld para imprimir valores de tipo 'long long' en C

return 0;
}