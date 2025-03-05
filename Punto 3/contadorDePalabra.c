#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1024  

int contar_coincidencias(FILE *archivo, const char *palabra) {
    char linea[MAX_LEN];
    int conteo = 0;
    size_t palabra_len = strlen(palabra);

    while (fgets(linea, MAX_LEN, archivo)) {
        char *ptr = linea;
        while ((ptr = strstr(ptr, palabra)) != NULL) {
            conteo++;
            ptr += palabra_len;
        }
    }
    return conteo;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s archivo.txt palabra_clave\n", argv[0]);
        return 1;
    }

    FILE *archivo = fopen(argv[1], "r");
    if (!archivo) {
        perror("Error al abrir el archivo");
        return 1;
    }

    int total = contar_coincidencias(archivo, argv[2]);
    fclose(archivo);

    printf("La palabra '%s' se repite %d veces en el texto.\n", argv[2], total);
    return 0;
}

