#include "printf.h"

int main(){

    my_string("Uso da funcao 'my_putchar():'\n");
    my_putchar('A');
    my_putchar('\n');
    my_putchar(66);
    my_putchar('\n');
    my_putchar('\n');

    my_string("Uso da funcao 'my_putnum():'\n");
    my_putnum(123);
    my_putchar('\n');
    my_putnum(1994);
    my_putchar('\n');
    my_putnum(2147483647);
    return 0;
}