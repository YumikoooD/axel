/*
** EPITECH PROJECT, 2022
** my_putnbr.c
** File description:
** print nbr 1 by 1
*/

char my_putchar(char c);

int my_put_nbr(int nbr)
{
    int counter = 0;
    if (nbr < 0) {
        nbr = -nbr;
    }
    if (nbr >= 10) {
        my_put_nbr(nbr / 10);
        my_put_nbr(nbr % 10);
    } else {
        my_putchar(nbr + '0');
        counter++;
    }
    return counter;
}
