/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_printf.c
*/

#include "../include/my.h"

const type_t type[] = {
    {'d', &is_int},
    {'i', &is_int},
    {'c', &is_char},
    {'s', &is_string},
    {'x', &is_hexa},
    {'X', &is_hexa_upper},
    {'o', &is_octal},
    {'p', &is_pointer},
    {'u', &is_uint},
    {'b', &is_binary},
    {'%', &is_percent},
    {0, NULL}
};

void match_type(char *str, va_list args)
{
    int iType = 0;

    while (type[iType].type != 0) {
        if (str[0] == type[iType].type)
            type[iType].function(args);
        iType++;
    }
}

int my_printf(char *str, ...)
{
    va_list args;

    va_start(args, str);
    for (; str[0] != '\0'; str++) {
        if (str[0] == '%') {
            str++;
            match_type(str, args);
        } else
            my_putchar(str[0]);
    }
    return (my_strlen(str));
    va_end(args);
}