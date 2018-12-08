/*
** EPITECH PROJECT, 2018
** Léo Garret
** File description:
** my_put_nbr.c.c
*/

#include "../include/my.h"

int my_put_nbr_base(unsigned int b, char *base)
{
    unsigned int size = my_strlen(base);

    if (b >= size) {
        my_put_nbr_base(b / my_strlen(base), base);
        my_put_nbr_base(b % my_strlen(base), base);
    } else
        my_putchar(base[b]);
    return (0);
}

int my_put_nbr_base_long(long b, char *base)
{
    unsigned int size = my_strlen(base);

    if (b >= size) {
        my_put_nbr_base(b / my_strlen(base), base);
        my_put_nbr_base(b % my_strlen(base), base);
    } else
        my_putchar(base[b]);
    return (0);
}

int my_put_nbr(int b)
{
    if (b == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        b = 147483648;
    }
    if (b < 0) {
        my_putchar('-');
        my_put_nbr(-b);
        return (0);
    }
    if (b < 10) {
        my_putchar('0' + b);
        return (0);
    }
    my_put_nbr(b / 10);
    my_putchar('0' + b % 10);
    return (0);
}