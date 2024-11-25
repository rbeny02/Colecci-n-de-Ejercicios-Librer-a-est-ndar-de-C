//
// Created by rania on 25/11/2024.
//
#include <stdio.h>
#include "funciones.h"


int contar_lineas(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return -1;
    }

    int count = 0;
    char ch;


    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    fclose(file);
    return count;
}
