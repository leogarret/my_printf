/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_functions.c
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int my_strlen(char const *str)
{
    int i = 0;
    
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}