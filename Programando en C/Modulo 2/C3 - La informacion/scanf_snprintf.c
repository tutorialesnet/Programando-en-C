/**
 * scanf_snprintf.c
 * Curso Programando en C
 *
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * El fichero scanf_snprintf.c muestra cómo usar scanf de una forma adecuada
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// longitud de palabra y formato
#define WORD_LEN_STR "5"
#define WORD_LEN atoi(WORD_LEN_STR)
#define FMT_LEN (3 + strlen(WORD_LEN_STR))

int main(int argc, char const *argv[]) {

    // declaramos las variables para la cadena y el formato
    char cad[WORD_LEN];
    char fmt[FMT_LEN];

    // definimos el formato
    snprintf(fmt, FMT_LEN, "%%%ds", WORD_LEN - 1);

    // Pedimos la palabra al usuario y la mostramos por pantalla
    printf("Introduce una palabra (formto = \"%s\"): ", fmt);
    scanf(fmt, cad); // uso valido de scanf con formato configurado previamente.
    printf("Palabra %s\n", cad);

    return 0;
}
