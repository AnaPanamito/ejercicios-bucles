#include <stdio.h>
int main() {
    int n, i = 1;
    long long producto = 1; //utilizao 'long long' para manejar valores grandes
    int primer_termino = 2;
    printf("\t\t-----EJERCICIO 8: Producto de una serie geometrica-----\n");
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    printf("Producto de los primeros %d terminos de la serie geometrica: ", n);

    do {
        producto *= primer_termino;
        printf("%d", primer_termino); //Imprime el término actual
        if (i < n) {
            printf(" * "); // Imprime el separador entre los numeros 
        }
        primer_termino *= 2; // Calcula (r = 2)
        i++;
    } while (i <= n);

    printf(" = %lld\n", producto);  //utilizo %lld para imprimir valores de tipo 'long long' en C

    return 0;

}