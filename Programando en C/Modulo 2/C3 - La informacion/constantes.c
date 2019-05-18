/**
 * constantes.c
 * Curso Programando en C
 *
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * El fichero constantes.c muestra un ejemplo simple de constantes
 */

#include <stdio.h>

// definimos las constantes
#define USUARIO_EDAD 20
#define USUARIO_NOMBRE "Jorge"

int main(int argc, char const *argv[]) {

    // hacemos uso de las constantes
    printf("El usuario se llama %s y tiene %d años.\n", USUARIO_NOMBRE, USUARIO_EDAD);
    printf("El usuario se llama %s y tiene %d años.\n", USUARIO_NOMBRE, USUARIO_EDAD);
    printf("El usuario se llama %s y tiene %d años.\n", USUARIO_NOMBRE, USUARIO_EDAD);
    printf("El usuario se llama %s y tiene %d años.\n", USUARIO_NOMBRE, USUARIO_EDAD);

    return 0;
}
