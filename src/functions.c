/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_functions.c
*/

#include "../include/my.h"

int number_of_arguments(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == '%')
            count++;
        i++;
    }
    return (i);
}