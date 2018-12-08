/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my.h
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "struct.h"

void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char const *str);
int my_printf(char *str, ...);
int numberOfArguments(char *str);
int my_put_nbr_base(unsigned int b, char *base);
int my_put_nbr(int b);
void is_int(va_list type_int);
void is_char(va_list type_char);
void is_string(va_list type_string);
void is_hexa(va_list type_hexa);
void is_hexa_upper(va_list type_hexa);
void is_octal(va_list type_octal);
void is_pointer(va_list type_pointer);
void is_uint(va_list type_uint);
int my_put_nbr_base_long(long b, char *base);
void is_percent(va_list type_percent);
void is_binary(va_list type_binary);