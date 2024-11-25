//
// Created by rania on 25/11/2024.
//
#include <stdio.h>
#include "Ejercicio 1/funciones.h"

int main() {

    char filename[] = "archivo.txt";


    int num_lines = contar_lineas(filename);


    printf("El archivo '%s' tiene %d líneas.\n", filename, num_lines);

    return 0;
}
