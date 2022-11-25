/*
** EPITECH PROJECT, 2022
** my_print_revalpha
** File description:
** Write a function that, beginning with z,
** displays the lowercase alphabet in descending order,
** on a single line.
*/
#include <unistd.h>

void my_putchar(char c);


int my_print_revalpha( void )
{
    char ascii;
    ascii = 122;
    while (ascii > 96) {
        my_putchar(ascii);
        ascii = ascii - 1;
    }
    return (0);
}
