#include "printf.h"

int main(){

    my_string("Uso da funcao 'my_putchar():'\n");
    my_putchar('A');
    my_putchar('\n');
    my_putchar(66);
    my_putchar('\n');
    my_putchar('\n');

    my_string("Uso da funcao 'my_putnum():'\n");
    my_putnum(0);
    my_putchar('\n');
    my_putnum(1993 + 1);
    my_putchar('\n');
    my_putnum(-2391);
    my_putchar('\n');
    my_putnum(2147483647);
    my_putchar('\n');
    my_putchar('\n');

    my_string("Uso da funcao 'my_string()' com o uso de inteiros:\n");
    my_string("Eu tenho %d anos\n", 19);
    my_string("Hoje eh dia %d do %d\n", 10, 2);
    return 0;
}