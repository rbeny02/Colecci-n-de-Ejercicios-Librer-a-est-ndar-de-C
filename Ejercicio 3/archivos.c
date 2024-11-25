//
// Created by rania on 25/11/2024.
//
#include <stdio.h>
#include "archivos.h"


void abrir_archivo(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("El archivo %s no se pudo abrir.\n", filename);
        return;
    }
    printf("El archivo %s se abrió correctamente para lectura.\n", filename);
    fclose(file);
}


void escribir_en_archivo(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("El archivo %s no se pudo abrir para escritura.\n", filename);
        return;
    }

    fprintf(file, "%s", content);
    printf("Contenido escrito en el archivo %s\n", filename);

    fclose(file);
}


void leer_del_archivo(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("El archivo %s no se pudo abrir para lectura.\n", filename);
        return;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leido del archivo %s: %s\n", filename, buffer);

    fclose(file);
}
