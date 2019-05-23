/**
 * variables.c
 * Curso Programando en C
 *
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * El fichero variables.c que muestra ejemplos básicos de variables
 */
#include <stdio.h>

typedef int numero_t;

int main(int argc, char const *argv[]) {

    numero_t a = 5, b;

    printf("a = %d\n", a);
    printf("b sin inicializar = %d\n", b);

    b = a;

    printf("b incializado = %d\n", b);

    return 0;

}
