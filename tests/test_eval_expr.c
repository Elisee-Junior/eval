/*
** EPITECH PROJECT, 2021
** test_eval
** File description:
** test_eval
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/eval.h"

Test(test_eval, eval_expr)
{
    int i = eval_expr("1+1");
    cr_assert_eq(i, 2);
}

Test(test_eval_1, eval_expr)
{
    int i = eval_expr("2*2");
    cr_assert_eq(i, 4);
}