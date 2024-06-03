#include <stdio.h>
int main() {
    int a, b; // declaramos variables 
    printf("\t\t-----EJERCICIO 11: Encontrar el MCD (Maximo Comun Divisor)\n");
    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    int temp;
    for (;;) {  
        if (b == 0) {   // Si b es igual a 0, significa que hemos encontrado el MCD
            break; //salimos de buble 
        }
        temp = b;
        b = a % b;
        a = temp;
    }
    // Mostrar el resultado
    printf("MCD de es %d\n", a, temp, a);
 
return 0;
}