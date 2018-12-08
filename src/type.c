/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_printf.c
*/

#include "../include/my.h"

void is_int(va_list type_int)
{
    my_put_nbr(va_arg(type_int, int));
}

void is_char(va_list type_char)
{
    my_putchar((char)va_arg(type_char, int));
}

void is_string(va_list type_string)
{
    my_putstr(va_arg(type_string, char *));
}

void is_hexa(va_list type_hexa)
{
    my_put_nbr_base(va_arg(type_hexa, int), "0123456789abcdef");
}

void is_hexa_upper(va_list type_hexa_upper)
{
    my_put_nbr_base(va_arg(type_hexa_upper, int), "0123456789ABCDEF");
}