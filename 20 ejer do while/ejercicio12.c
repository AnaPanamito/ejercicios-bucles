#include <stdio.h>
int main() {
    int n, i = 1, suma = 0;
    printf("\t\t-----EJERCICIO 12: Sumar los numeros impares hasta n-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Suma de los numeros impares hasta %d: ", n);

    do {
        if (i % 2 != 0) { // Verificamos si el número es impar
            suma += i; //acomula la suma de los numeros impares 
            printf("%d + ", i); // imprime el numero impar 
        }
        i++;
    } while (i <= n);

    printf(" = %d\n", suma); // imprme el resultado 
    
    return 0;

}