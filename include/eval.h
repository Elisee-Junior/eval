/*
** EPITECH PROJECT, 2021
** eval
** File description:
** eval
*/

#ifndef _EVAL_
    #define _EVAL_

    #include <unistd.h>

    int my_put_nbr(int nb);
    int number(char **str_ptr);
    int factor(char **str_ptr);
    int eval_expr(char *str);
    void my_putchar(char c);
    int summands(char **str_ptr);

#endif /* !_EVAL_ */
