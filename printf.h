#ifndef PRINTF_H
#define PRINTF_H

/**
 * A função faz a impressão de apenas um caractere
 * 
 * @param int valor inteiro que será convertido em caractere
 * @return um inteiro convertido em caractere com base na tabela ASCII
 **/
int my_putchar(int);

/** 
 * 
 * A função faz a impressão de um array de caracteres
 *
 * @param char* um ponteiro que aponta para o início do array de caracteres
 * @return impressão de um conjunto de caracteres
 **/
void my_string(char*, ...);

/** 
 *  A função faz a impressão de números inteiros não negativos
 * 
 * @param int um número inteiro não negativo
 * @return impressão de números inteiros 
 **/
int my_putnum(int);

#endif