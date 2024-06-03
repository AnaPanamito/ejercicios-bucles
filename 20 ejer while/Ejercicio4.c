#include <stdio.h>

int main() {
    int numero, resultado = 0, suma_cubo = 0;
    printf("\t\t-----EJERCICIO 4: Radicacion mediante restas sucesivas-----\n");
    printf("Ingrese el numero: ");
    scanf("%d", &numero);

    int i = 1;
    do {
        suma_cubo = 0;
        int j = 0;
        do {
            int k = 0;
            do {
                suma_cubo += i; // Sumamos i k veces para calcular i^3
                k++;
            } while (k < i);
            j++;
        } while (j < i);

        if (suma_cubo > numero) {  //Si la suma de los cubos es mayor que el número, salimos del bucle
            break;
        }

        resultado = i; // Actualizamos el resultado con el valor actual de i
        i++;
    } while (1);

    printf("%d^(1/3) = %d\n", numero, resultado);
    return 0;
}
