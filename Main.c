//
// Created by rania on 25/11/2024.
//
#include <stdio.h>
#include"Ejercicio 1/funciones.h"
#include "Ejercicio 2/cadenas.h"
#include <stdio.h>


int main() {

    char str1[] = "Hola";
    char str2[] = "Mundo";


    int comparison = comparar_cadenas(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas '%s' y '%s' son iguales.\n", str1, str2);
    } else {
        printf("Las cadenas '%s' y '%s' son diferentes.\n", str1, str2);
    }


    char str3[] = "Hola mundo";


    int length = calcular_longitud(str3);

    printf("La longitud de '%s' es: %d\n", str3, length);

    return 0;
}
