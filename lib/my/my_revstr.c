/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** reverse a string
*/

#include<unistd.h>
#include<stdio.h>

int my_put_nbr(int nb);

int my_strlen(char const *str);

void my_putstr ( char const *str );

int my_putchar(char c);

void my_swap_char(char *a, char *b)
{
    char ptr_a = *a;
    *a = *b;
    *b = ptr_a;
}

char *my_revstr(char *str)
{
    int longueur = 0;
    int debut = 0;
    int fin = 0;
    while (str[longueur] != '\0') {
        longueur = longueur + 1;
    }
    fin = longueur - 1;
    while (debut < fin) {
        my_swap_char(&str[debut], &str[fin]);
        debut = debut + 1;
        fin = fin - 1;
    }
    my_putstr(str);
    return str;
}
