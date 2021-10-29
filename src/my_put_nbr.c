/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../include/eval.h"

void limit(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int my_put_nbr(int nb)
{
    int x = 0;
    if (nb < -2147483647 || nb > 2147483647)
    {
        limit("-2147483648");
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    } if (nb >= 10) {
        x = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(x + 48);
    }
    else
        my_putchar(nb + 48);
    return (0);
}
