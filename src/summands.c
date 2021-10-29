/*
** EPITECH PROJECT, 2020
** summands
** File description:
** summands
*/

#include "../include/eval.h"

int summands(char **str_ptr)
{
    int k = factor(str_ptr);

    for ( ; *(*str_ptr) == '+'; ) {
        *(*str_ptr)++;
        k = k + factor(str_ptr);
    }
    for ( ; *(*str_ptr) == '-'; ) {
        *(*str_ptr)++;
        k = k - factor(str_ptr);
    }
    return (k);
}
