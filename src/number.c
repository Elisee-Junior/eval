/*
** EPITECH PROJECT, 2020
** number.c
** File description:
** passing the first string's character to an integer
*/

#include "../include/eval.h"

int number(char **str_ptr)
{
    int nbr = 1;
    int res = 0;
    int c = 0;

    for ( ; *(*str_ptr) == '+' || *(*str_ptr) == '-'; (*str_ptr)++) {
        if (*(*str_ptr) == '-') {
            nbr = nbr * (-1);
        }
    }
    for ( ; *(*str_ptr) >= '0' && *(*str_ptr) <= '9'; (*str_ptr)++) {
        res = (res * 10) + (*(*str_ptr) - 48);
    }
    for ( ; *(*str_ptr) == '('; ) {
        *(*str_ptr)++;
        c = summands(str_ptr);
        *(*str_ptr)++;
        return (nbr * c);
    }
    return (res * nbr);
}
