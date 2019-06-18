/**
 * es1.c
 * Curso Programando en C
 *
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * El fichero es1.c
 */

#include <stdio.h>

#define NOMBRE_LONGITUD 80

int main(int argc, char const *argv[]) {
    unsigned int edad;
    char nombre[NOMBRE_LONGITUD];

    printf("Introduzca su nombre: ");
    scanf("%79s", nombre);

    printf("Introduzca su edad: ");
    scanf("%d", &edad);

    printf("Hola %s! Tienes %d años.\n", nombre, edad);

    return 0;
}
