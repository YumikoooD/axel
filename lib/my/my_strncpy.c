/*
** EPITECH PROJECT, 2022
** strncpy.c
** File description:
** copy the n char into an other str
*/

#include <unistd.h>

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = n - 1;
    if (i > my_strlen(dest)){
        dest[my_strlen(dest) - 1 ] = '\0';
        i--;
    }
    int temp = n;
    for (; n +1 > 0; --n) {
        if (n >= 0){
            dest[temp] = src[temp];
            --temp;
        }
    }
    return dest;
}
