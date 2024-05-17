// Realizar un programa que imprima los numeros primos en un rango dado. No se permite el ingreso de numeros negativos.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()

    {
        int n, i, x;
        printf("Introduce Limite Superior\n");
        scanf_s("%d", &n);
        printf("Introduce Limite Inferior\n");
        scanf_s("%d", &x);
        for (i = x; i <= n; i++)
        {
            printf("\n%d", i);
        }
        return 0;
    }



