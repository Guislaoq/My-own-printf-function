#include "printf.h"
#include <unistd.h>

int my_putchar(int c){
    write(1,&c ,1);
}

int my_string(char *s){
    while(*s)
        my_putchar(*s++);
}