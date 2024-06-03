#include <stdio.h>
int main() {
    int n, i, count = 0; //declaramos variables donde utilizo count para almacenar el número de números primos
    printf("\t\t-----EJERCICIO 18:Contar los numeros primos hasta n-----\n"); 
    printf("Ingrece un numero: ");
    scanf("%d", &n);

    printf("Hay numeros primos hasta %d: ", n);

    for (i = 2; i <= n; i++) {  // aqui calculamos con el bucle for 
        int is_primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_primo = 0;
                break;   // break en C se utiliza para salir de un bucle 
            }
        }
        if (is_primo) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nHay %d numeros primos hasta %d.\n", count, n);
    
return 0;
}