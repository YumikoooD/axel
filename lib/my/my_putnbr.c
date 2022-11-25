/*
** EPITECH PROJECT, 2022
** putnbr
** File description:
** nbr
*/

char my_putchar(char c);

int my_putnbr(int nbr)
{
    if (nbr < 0) {
        nbr = -nbr;
    }
    if (nbr >= 10) {
        my_putnbr(nbr / 10);
        my_putnbr(nbr % 10);
    } else {
        my_putchar(nbr + '0');
    }
}
