/*
** EPITECH PROJECT, 2022
** my_compute_factorial_it
** File description:
** give the factorial of number
*/
#include<unistd.h>

int my_putchar(char c);

int my_compute_factorial_it(int nb)
{
    int n = nb - 1;
    if (nb < 0 || nb >= 13){
        return (0);
    }
    if (nb == 0 || nb == 1){
        return (1);
    }
    while (n > 1){
        nb = nb * n;
        n = n - 1;
    }
    return (nb);
}
