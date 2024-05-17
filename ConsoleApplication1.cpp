// Realizar un programa que imprima los numeros primos en un rango dado. No se permite el ingreso de numeros negativos.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int numPrimo(int);

int main() {
    int min, max;
    char op;
    do {


        printf("Introduce el inicio del rango:\n");
        scanf_s("%d", &min);
        printf("Introduce el fin del rango:\n");
        scanf_s("%d", &max);

        printf("Los numeros primos entre %d y %d son: ", min, max);
        for (int i = min; i <= max; ++i) {
            if (numPrimo(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");

        printf("\nDeseas continuar? (c=Continuar)\n");
        scanf_s(" %c", &op);
        printf("\n");
    } while (op == 'c' || op == 'C');
    
    return 0;
} 



int numPrimo(int numero) {
    if (numero <= 1) {     //Aqui es donde negamos los negativos, los numeros no pueden ser 1 ni algo menor a este.
        return(0);
    }
    for (int i = 2; i*i <= numero; ++i) {  //El bucle continuará mientras el cuadrado de i sea menor o igual al valor de numero
        if (numero % i == 0) {
            return 0;      //Si es divisible nos devuelve un false.
        }
    }
    return 1;             //Pero si no, nos devulve un true, diciendonos que si es un numero primo.
    }

