https://github.com/rbeny02/Colecci-n-de-Ejercicios-Librer-a-est-ndar-de-C.git
# Colecci-n-de-Ejercicios-Librer-a-est-ndar-de-C
Enunciado
1. Las funciones comunes del lenguaje C (<stdlib.h>)

a. Utiliza la función abs() para calcular el valor absoluto de un número entero. Prueba con varios números, incluyendo negativos.

#include <stdlib.h>
#include <stdio.h>

int main() {
    // Declarar un número negativo
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

    return 0;
}
b. Usa la función rand() para generar un número aleatorio. Luego, usa srand() para cambiar la semilla de la generación de números aleatorios y observa cómo cambian los números generados.


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));

    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);

    return 0;
}
2. Cadenas (<string.h>)

a. Crea dos cadenas de caracteres y usa la función strcmp() para compararlas. Prueba con cadenas iguales y diferentes.

#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}
b. Usa la función strlen() para calcular la longitud de una cadena.

#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hola mundo";

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    return 0;
}
3. Archivos (<stdio.h>)

a. Usa la función fopen() para abrir un archivo de texto. Si el archivo no existe, muestra un mensaje de error.


#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    // Cerrar el archivo al final
    fclose(file);

    return 0;
}
b. Escribe en un archivo de texto usando fprintf(). Después, lee lo que escribiste usando fscanf().


#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file);

    // Abrir de nuevo para leer
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);

    return 0;
}
