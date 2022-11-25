/*
** EPITECH PROJECT, 2022
** my_print_comb
** File description:
** Write a function that, beginning with a,
** displays the lowercase alphabet in ascending
** order, on a single line.
*/

#include <unistd.h>

void my_putchar(char c);

int boucle(char a, char b, char c)
{
    while ( c <= 57 ) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        if (a == 55 && b == 56 && c == 57) {
            return (0);
        } else {
            my_putchar(',');
            my_putchar(' ');
        }
        c = c + 1;
    }
}

int my_print_comb(void)
{
    char a, b, c;
    a = 48;
    b = 49;
    c = 50;
    while ( a <= 55 ) {
        while ( b <= 56) {
            boucle(a, b, c);
            c = 50 + (b - 48);
            b = b + 1;
        }
        b = 49 +( a - 48 );
        a = a + 1;
    }
}
