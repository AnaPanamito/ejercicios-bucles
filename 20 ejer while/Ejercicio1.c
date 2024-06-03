#include <stdio.h>

int main() {
    int numero = 12567;
    int suma = 0;
    int digitos[5]; // 5 porque son 5 dígitos
    int i = 0; //Declaramos la variable i para usar en los bucles do while.
    printf("\t\t-----EJERCICIO 1: Suma de los digitos de un numero-----\n");
    printf("Los digitos que se van a sumar son: %d\n", numero);
    // Separar los dígitos del número 12567 -> 1 + 2 + 5 + 6 + 7
    do {
        digitos[i] = numero % 10; //Dividimos número entre 10 para eliminar el último dígito y obtener el siguiente.
        numero /= 10;
        i++;
    } while (numero > 0);

    // Sumar los dígitos
    i = 0;
    do {
        suma += digitos[i];
        i++;
    } while (i < 5);

    printf("La suma de los digitos es: %d\n", suma);
    return 0;
}
