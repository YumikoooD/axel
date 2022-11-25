/*
** EPITECH PROJECT, 2022
** my_print_digits
** File description:
** Write a function that displays all
** the digits, on a single line,
** in ascending order.
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
    char ascii;
    ascii = 48;
    while (ascii < 58) {
        my_putchar(ascii);
        ascii = ascii + 1;
    }
    return (0);
}
