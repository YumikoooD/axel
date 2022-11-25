/*
** EPITECH PROJECT, 2022
** my_print_alpha
** File description:
** Write a function that, beginning with a,
** displays the lowercase alphabet in ascending
** order, on a single line.
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
    char ascii;
    ascii = 97;
    while (ascii < 123) {
        my_putchar(ascii);
        ascii = ascii + 1;
    }
    return (0);
}
