/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** Write a function that swaps the content
** of two integers, whose addresses are given as a parameter.
*/

#include <unistd.h>

void my_putchar(char c);

void my_swap( int *a , int *b )
{
    int ptr_a = *a;
    *a = *b;
    *b = ptr_a;
}
