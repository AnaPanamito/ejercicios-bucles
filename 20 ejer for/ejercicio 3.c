#include <stdio.h>
int main() {
    int base, exponente;
    int resultado = 1;  // Inicializar el resultado en 1, ya que cualquier número elevado a 0 es 1
    printf("\t\t-----EJERCICIO 3: Potencia mediante sumas sucesivas-----\n");
    printf("Introduce la base: "); // el numero base 
    scanf("%d", &base);
    printf("Introduce el exponente: "); // Solicitar que ingrese el exponente
    scanf("%d", &exponente);
    printf("%d^%d = ", base, exponente); // Mostrar el cálculo, por ejemplo, "2^3 = "

    for (int i = 0; i < exponente; i++) {  
        if (i > 0) {
            printf(" * ");  // imprimir " * " para la multiplicacion 
        }
        printf("%d", base);  // Imprimir el valor de la base
        resultado *= base;  // Calcular el resultado multiplicando por la base 
    }
    printf(" = %d\n", resultado);  // Imprimir el resultado
return 0;
}