/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** power number in rec
*/

#include<unistd.h>

int my_putchar(char c);

int my_compute_power_rec(int nb, int p)
{
    if (p < 0){
        return (0);
    }
    if (nb == 0 || nb == 1){
        return (1);
    }
    if (p < 2) {
        return (nb);
    }
    return (my_compute_power_rec(nb, p - 1 ) * nb);
}
