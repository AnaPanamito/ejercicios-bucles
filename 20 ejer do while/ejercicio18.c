#include <stdio.h>
int main() {
    int n, i = 2, count = 0;
    printf("\t\t-----EJERCICIO 18: Contar los numeros primos hasta n-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Numeros primos hasta %d: ", n);

    do {
        int j = 2, es_primo = 1; // Inicializa la variable es_primo a 1 que seria verdadera
        while (j * j <= i) {  // aqui va comprobando divisores hasta la raíz cuadrada de i
            if (i % j == 0) { // Si i es divisible por j, entonces no es primo
                es_primo = 0; // entonces si es_primo a 0 esto es falso
                break; // salimos de bucle 
            }
            j++;
        }
        if (es_primo) { // Si es_primo sigue siendo verdadero, entonces i es primo
            printf("%d ", i); // imprime el numero primo 
            count++; // incrementa el contador de los numeros primos 
        }
        i++;
    } while (i <= n);

    printf("\nHay %d numeros primos hasta %d.\n", count, n); //imprime el total de numeros primos encontrados 
    
    return 0;

}