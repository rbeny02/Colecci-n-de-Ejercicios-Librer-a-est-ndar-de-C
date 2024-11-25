//
// Created by rania on 25/11/2024.
//
#include <stdio.h>
#include"Ejercicio 1/funciones.h"
#include "Ejercicio 2/cadenas.h"
#include "Ejercicio 3/archivos.h"

#include <string.h>


int main() {

    printf("Ejercicio 1: Comparar Cadenas\n");
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }


    printf("\nEjercicio 2: Longitud de la Cadena\n");
    char str3[] = "Hola mundo";
    int length = strlen(str3);
    printf("La longitud de '%s' es: %d\n", str3, length);


    printf("\nEjercicio 3: Manejo de Archivos\n");

    const char *filename = "file.txt";


    abrir_archivo(filename);


    const char *content = "Hola, este es un archivo de prueba";
    escribir_en_archivo(filename, content);


    leer_del_archivo(filename);

    return 0;
}
