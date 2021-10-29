/*
** EPITECH PROJECT, 2021
** test_put_nbr
** File description:
** test_put_nbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/eval.h"

Test(test_put_nbr, my_put_nbr)
{
    int i = my_put_nbr(1);
    cr_assert_eq(i, 0);
}