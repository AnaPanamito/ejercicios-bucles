#include <stdio.h>
int main() {
    int numero = 12567;
    int inverso = 0;     // aquí para almacenar el número invertido
    printf("\t\t-----EJERCICIO 2: Inverso de un numero-----\n");

    printf("Numero original: %d\n", numero);

    // Calcular el inverso del número
    for (; numero > 0; numero /= 10) {
        inverso = inverso * 10 + numero % 10;  // multiplicando inverso por 10 y sumando el dígito, Luego, numero se divide entre 10 para eliminar el último dígito y proceder con el siguiente.
    }

    printf("El inverso del numero es: %d\n", inverso);
return 0;
}