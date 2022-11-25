/*
** EPITECH PROJECT, 2022
** my_nbrlen.c
** File description:
** return the len of a putnbr
*/

#include "my.h"
void my_putchar(char c);

int my_nbrlen(int nbr)
{
    int count = 0;
    if (nbr < 0) {
        nbr = -nbr;
    }
    if (nbr >= 10) {
        count = count + my_nbrlen(nbr / 10);
        count = count + my_nbrlen(nbr % 10);
    } else
        count = count + 1;
    return count;
}
