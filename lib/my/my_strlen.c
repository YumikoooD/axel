/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** Write a function that counts and returns the number
** of characters found in the string passed as parameter.
*/

#include <unistd.h>

int my_strlen( char const *str )
{
    int i = 0;

    while ( str[i] != '\0' ){
        i = i + 1;
    }
    return i;
}
