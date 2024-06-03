#include <stdio.h>
int main() {
    int num, i, factorial = 1; // variables,'n' para almacenar el número ingresado, 'i' para usar como contador en el bucle for y 'factorial' para almacenar el resultado del factorial.
    printf("\t\t-----EJERCICIO 6:Factorial de un numero-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("%d! = ", num);
    for (i = num; i >= 1; i--) {
        printf("%d", i);
        if (i > 1) {
            printf(" * "); // imprimimos el valor actual de 'i'. Si 'i' es mayor que 1, también imprimimos un asterisco (*) para separar los factores.
        }
        factorial *= i;
    }

    printf(" = %d\n", factorial); // Multiplicamos el valor actual de factorial por el valor de i.
    
return 0;
}