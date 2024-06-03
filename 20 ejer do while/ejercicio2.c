#include <stdio.h>
int main() {
    int numero = 12567;
    int inverso = 0;
    printf("\t\t-----EJERCICIO 2: Inverso de un numero-----\n");
    printf("Numero original: %d\n", numero);

    // Calcular el inverso del número
    do {
        inverso = inverso * 10 + numero % 10; //Obtenemos el último dígito del número y lo agregamos al inverso
        numero /= 10; // Eliminamos el último dígito del número
    } while (numero > 0);

    printf("El inverso del numero es: %d\n", inverso);

    return 0;

}