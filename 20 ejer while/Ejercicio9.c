#include <stdio.h>
int main() {
    int num, i, contar = 0; // declaramos variables y a 'contar' lo utilizo para almacenar el número de dígitos.
    printf("\t\t-----EJERCICIO 9:Numero de digitos de un numero------\n");
    printf("Ingrese una cantidad de numero: ");
    scanf("%d", &num);

    while (num != 0) {   //El bucle while con i igual al valor de num y lo decrementamos en cada iteración hasta que i sea igual a 0.
        num /= 10;
        contar++;
    }

    printf("El numero de digitos de %d es %d.\n", num, contar);
     return 0;
}
