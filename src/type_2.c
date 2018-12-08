/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_printf.c
*/

#include "../include/my.h"

void is_octal(va_list type_octal)
{
    my_put_nbr_base(va_arg(type_octal, int), "01234567");
}

void is_pointer(va_list type_pointer)
{
    my_putstr("0x7ff");
    my_put_nbr_base_long(va_arg(type_pointer, long), "0123456789abcdef");
}

void is_uint(va_list type_uint)
{
    my_put_nbr_base(va_arg(type_uint, unsigned int), "0123456789");
}

void is_binary(va_list type_binary)
{
    my_put_nbr_base(va_arg(type_binary, unsigned int), "01");
}

void is_percent(va_list type_percent)
{
    (void)type_percent;
    my_putchar('%');
}