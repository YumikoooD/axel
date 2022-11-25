/*
** EPITECH PROJECT, 2022
** my_compute_factorial_rec
** File description:
** return the factorial in recursive
*/
#include <unistd.h>

void my_putchar(char c);

int my_compute_factorial_rec(int nb)
{
    int n = nb;
    if ( nb < 0 || nb >= 13 ){
        return (0);
    }
    if ( nb == 0 || nb == 1 ){
        return (1);
    }
    return n * my_compute_factorial_rec(nb - 1);
}
