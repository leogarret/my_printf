/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** struct.h
*/

#include <stdarg.h>

typedef struct type_s
{
    char type;
    void (*function)(va_list);
} type_t;