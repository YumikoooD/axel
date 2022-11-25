/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** return the square of a number
*/
#include<unistd.h>

int my_putchar(char c);

int my_compute_square_root(int nb)
{
    int i = 0;
    if ((nb % 10) == 0) {
        while ((i * i) != nb) {
            i = i + 1;
        }
        return i;
    } else {
        return (0);
    }

}
