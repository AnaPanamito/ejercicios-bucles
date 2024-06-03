#include <stdio.h>
int main() {
    int num, contar = 0;
    printf("\t\t-----EJERCICIO 9: Numero de digitos de un numero-----\n");
    printf("Ingrese una cantidad de numero: ");
    scanf("%d", &num);

    do {
        num /= 10; // Elimina el dígito menos significativo
        contar++; // Incrementa el contador de dígitos
    } while (num != 0); // le da hasta que el número sea cero

    printf("El numero de digitos es %d.\n", contar);

    return 0;

}