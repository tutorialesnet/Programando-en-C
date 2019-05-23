/**
 * ej_printf.c
 * Manoel Folgueira <manoel@tutorialesnet.net>
 * http://tutorialesnet.net
 *
 * Muestra un ejemplo de la función printf
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

    /* Enteros base 10 */
    printf("Entero en base 10 [formato %%d, datos: 8]: %d\n", 8); // muy usado
    printf("Entero en base 10 [formato %%i, datos: 5]: %i\n", 5); // muy usado
    printf("Entero en base 10 sin signo [formato %%u, datos: 6]: %u\n", 6);
    printf("Entero en base 10 sin signo [formato %%u, datos: -6]: %u\n", -6);

    /* Otros enteros */
    printf("Entero en base 8 (octal) sin signo [formato %%o, datos: 9]: %o\n", 9);
    printf("Entero en base 16, letras en minúscula [formato %%x, datos: 255]: %x\n", 255);
    printf("Entero en base 16, letras en minúscula [formato %%X, datos: 255]: %X\n", 255);

    /* Numeros en punto flotante / números con cifras decimales / números reales - 6 decimales por defecto */
    printf("Decimal de precisión simple [formato %%f, datos: 49.123456789]: %f\n", 49.123456789); // muy usado
    printf("Decimal de precisión doble [formato %%.7lf, datos: 49.123456789]: %.7lf\n", 49.123456789); // muy usado
    printf("Notación científica con precisión simple [formato %%e, datos: 49.123456789]: %e\n", 49.123456789);
    printf("Notación científica con precisión doble [formato %%.7E, datos: 49.123456789]: %.7E\n", 49.123456789);

    /* Caracteres y cadenas de caracteres */
    printf("Caracter [formato %%c, datos: 65]: %c\n", 65);

    /**
     * Wikipedia: In C, all escape sequences consist of two or more characters, the first of which is the backslash,
     * \ (called the "Escape character"); the remaining characters determine the interpretation of the escape sequence.
     * For example, \n is an escape sequence that denotes a newline character.
     *
     * https://en.wikipedia.org/wiki/Escape_sequences_in_C
    */
    printf("Cadena de caracteres terminada a null [formato %%s, datos: \"texto\"]: %s\n", "texto"); // muy usado

    /* Modificadores variables de los placeholders de un entero justificando a la derecha */
    printf("Modificadores variables de los placeholders [formato %%*d, datos: 5, 2]: @%*d@\n", 5, 2);
    /* Modificadores variables de los placeholders de un entero justificando a la izquierda */
    printf("Modificadores variables de los placeholders [formato %%-*d, datos: 5, 2]: @%-*d@\n", 5, 2);
    /* Modificadores variables de los placeholders de un real */
    printf("Modificadores variables de los placeholders [formato %%*.*f, datos: 5, 1, 22.22]: @%*.*f@\n", 5, 1, 22.22);

    return 0;
}
