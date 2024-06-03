#include <stdio.h>
int main() {
    int numero = 12567; 
    int suma = 0;
    int digitos[5];  // 5 porque son 5 dígitos
    int i;  //Declaramos la variable i para usar en los bucles for.
    printf ("\t\t-----EJERCICIO 1:Suma de los digitos de un numero -----\n");

    printf("Los digitos que se van a sumar son: %d\n", numero);

    // Separar los dígitos del número 12567 -> 1 + 2 + 5 + 6 + 7
    for (int i = 0; numero > 0; i++) {
        digitos[i] = numero % 10;       //Dividimos número entre 10 para eliminar el último dígito y obtener el siguiente. 
        numero /= 10;
    }

    // Sumar los dígitos
    for (i = 0; i < 5; i++) {
        suma += digitos[i];
    }

    printf("La suma de los digitos es: %d\n", suma);
    return 0;
}