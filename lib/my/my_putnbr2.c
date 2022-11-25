/*
** EPITECH PROJECT, 2022
** my_putnbr
** File description:
** 2
*/

char my_putchar(char c);

int my_putnbr2(int nbr)
{
    if (nbr < 0) {
        nbr = -nbr;
    }
    if (nbr >= 10) {
        my_putnbr2(nbr / 10);
        my_putnbr2(nbr % 10);
    } else {
        my_putchar(nbr + '0');
    }
    my_putchar(' ');
}
