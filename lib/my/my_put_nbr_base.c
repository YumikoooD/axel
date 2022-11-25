/*
** EPITECH PROJECT, 2022
** szdihjno
** File description:
** edytzgubhin
*/

#include <stdarg.h>
#include "my.h"

int mptb(unsigned long long nb, char const *base, int *counter)
{
    unsigned int p;
    unsigned int nbr = 0;
    int count = 0;
    p = my_strlen(base);
    counter += p;
    if (nb < p) {
        my_putchar(base[nb]);
        ++count; return (count);
    } if (nb < 0) {
        my_putchar('-');
        ++count;
        nb = nb * (-1);
        mptb(nb, base, counter); return 0;
    } else if (nb > p) {
        nbr = (nb % p);
        mptb(nb / p, base, counter);
        my_putchar(base[nbr]);
        count ++; return (count);
    }
}

int hexa_min(va_list ap, int *count, const char *format, int *counter)
{
    char *base = "0123456789abcdef";
    mptb(va_arg(ap, unsigned int), base, counter);
}

int hexa_maj(va_list ap, int *count, const char *format, int *counter)
{
    char *base = "0123456789ABCDEF";
    mptb(va_arg(ap, unsigned int), base, counter);
}

int binarie(va_list ap, int *count, const char *format, int *counter)
{
    mptb(va_arg(ap, unsigned int), "01", counter);
}

int octal(va_list ap, int *count, const char *format, int *counter)
{
    char *base = "01234567";
    mptb(va_arg(ap, unsigned int), base, counter);
}
