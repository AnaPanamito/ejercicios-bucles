#include <stdio.h>
int main() {
    int base, exponente; //Declaramos variables 
    int resultado = 1;
    printf("\t\t-----EJERCICIO 3: Potencia mediante sumas sucesivas-----\n");
    printf("Introduce la base: "); // le pedimos al usuario q ingrese dos valores unopra base y otro para exponente 
    scanf("%d", &base);
    printf("Introduce el exponente: ");
    scanf("%d", &exponente);
    printf("%d^%d = ", base, exponente);

    int i = 0;
    do {  // bucle do-while para calcular la potencia mediante sumas sucesivas.
        if (i > 0) {
            printf(" * "); // Imprimimos el signo de multiplicación entre los factores
        }
        printf("%d", base); // imprimimos la base 
        resultado *= base; // multiplicamos resultado por la base 
        i++;
    } while (i < exponente);
    printf(" = %d\n", resultado);

    return 0;

}