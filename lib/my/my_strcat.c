/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** cat a str
*/

#include <stdlib.h>

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (my_strlen(dest) * my_strlen(src) + 1));
    for (i = 0; dest[i] != '\0'; i++) {
        str[i] = dest[i];
    }
    str[i] = '/';
    i++;
    for (int k = 0; src[k] != '\0'; k++) {
        str[i] = src[k];
        i++;
    }
    i++;
    str[i] = '\0';
    return str;
}
