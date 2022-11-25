/*
** EPITECH PROJECT, 2022
** jaefe
** File description:
** mfkjae
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr2(char const *str)
{
    int i = 0;
    int counter = 0;
    while ( str[i] != '\0' ) {
        my_putchar(str[i]);
        i = i + 1;
        counter++;
    }
    return counter;
}
