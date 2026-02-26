#include "printf.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int my_putchar(int c){
    write(1,&c ,1);
}

int my_putnum(int n){
    short int qty = 0;
    char *number = malloc(12 * sizeof(char));

    if(n < 0){
        my_putchar('-');
        n = -n;
    }

    while(1){
       *(number + qty) = n % 10 + '0';
       if(n < 10)
        break;
        
       n = n/10;

        qty++;
    }

    for(int i = qty; i >= 0; i--)
    {
        write(1,number+ i, 1);
    }
    
    free(number);
}

void my_string(char *string, ...){
    va_list list;
    va_start(list, string);
    while(*string != '\0'){
        if(*string != '%')
            my_putchar(*string);

        
        *string++;
    }
}