#include "printf.h"
#include <unistd.h>

int my_putchar(int c){
    write(1,&c ,1);
}