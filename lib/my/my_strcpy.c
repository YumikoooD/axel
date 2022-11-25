/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** copie string into another
*/

#include <unistd.h>

int my_putchar(char c);

int my_strlen(char const *str);

void my_putstr ( char const *str );

char *my_strcpy(char *dest, char *src)
{
    int i = my_strlen(src) - 1;
    for (; i >= 0; i--){
        dest[i] = src[i];
    }
    return dest;
}
