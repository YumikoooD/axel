/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** Write a function that displays,
** one-by-one, the characters of a string.
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;
    int counter = 0;
    while ( str[i] != '\0' ) {
        my_putchar(str[i]);
        i = i + 1;
        counter++;
    }
    my_putchar(' ');
    return counter;
}
