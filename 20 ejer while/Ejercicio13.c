#include <stdio.h>

int main() {
    int n, i = 2, suma = 0;
    printf("\t\t-----EJERCICIO 13: Sumar los numeros pares hasta n-----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Si n = %d, suma = ", n);

    do {
        suma += i; // acomula la suma de los numeros pares
        printf("%d", i); //imprime el numero par 
        if (i < n) {
            printf(" + "); // imprime el + 
        }
        i += 2; //incrementa en dos para octener el siguiente numero par 
    } while (i <= n);

    printf(" = %d\n", suma); // imprime el resultado 

    return 0;

}