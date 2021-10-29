/*
** EPITECH PROJECT, 2020
** factor
** File description:
** factor
*/

#include "../include/eval.h"

int factor(char **str_ptr)
{
    int k = number(str_ptr);

    for ( ; *(*str_ptr) == '*'; ) {
    *(*str_ptr)++;
        k = k * number(str_ptr);
    }
    for ( ; *(*str_ptr) == '/'; ) {
        *(*str_ptr)++;
        k = k / number(str_ptr);
    }
    for ( ; *(*str_ptr) == '%'; ) {
        *(*str_ptr)++;
        k = k % number(str_ptr);
    }
    return (k);
}
