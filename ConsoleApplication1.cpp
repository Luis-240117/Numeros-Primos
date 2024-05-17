// Realizar un programa que imprima los numeros primos en un rango dado. No se permite el ingreso de numeros negativos.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int numPrimo(int);

int main() {
    int min, max;
    printf("Introduce el inicio del rango: ");
    scanf_s("%d", &min);
    printf("Introduce el fin del rango: ");
    scanf_s("%d", &max);

    printf("Números primos en el rango [%d, %d]: ", min, max);
    for (int i = min; i <= max; ++i) {

    }

    return 0;
}

int numPrimo(int numero) {
    if (numero <= 1) {     //Aqui es donde negamos los negativos, los numeros no pueden ser 1 ni algo menor a este.
        return(0);
    }
    for(int i=2;i*i<=numero; ++i)
}
