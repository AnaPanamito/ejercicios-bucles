#include <stdio.h>
int main() {
    int numero, resultado = 0, suma_cubo = 0; // variables 
    printf("\t\t-----EJERCICIO 4: Radicacion mediante restas sucesivas-----\n");
    printf("Ingrese el numero: "); 
    scanf("%d", &numero);
    // Probar valores q vayan incrementando hasta encontrar el valor que satisface la raíz cúbica
    for (int i = 1; ; i++) {
        suma_cubo = 0;

        // aqui vamor a Calcular el cubo de i 
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < i; k++) {
                suma_cubo += i;
            }
        }

        if (suma_cubo > numero) {
            break; // break en C se utiliza para salir de un bucle 
        }

        resultado = i;
    }

    printf("%d^(1/3) = %d\n", numero, resultado); // imprimir resultado 
return 0;
}