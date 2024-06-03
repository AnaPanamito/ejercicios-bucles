#include <stdio.h>

int main() {
    
    int a, b; // declaro variables 
    printf("\t\t-----EJERCICIO 11: Encontrar el MCD (Máximo Común Divisor)-----\n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    int temp;
    do {
        temp = b; // Guarda el valor de b en una variable temporal
        b = a % b; // b toma el valor del resto de la división de a / b
        a = temp; // a toma el valor anterior de b
    } while (b != 0); // aqui continúa hasta que b sea cero 

    printf("MCD es %d\n", a);
    return 0;
}
