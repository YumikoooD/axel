/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** write all proto of lib
*/

#include <stdio.h>
#include <stdarg.h>

#ifndef MY_H
    #define MY_H
    int toto(va_list ap, int *count, const char *format, int *counter);

    int my_put_nbr(int nbr);

    int lsd(va_list ap, int *count, const char *format);

    int my_lsr(va_list ap, int *count, const char *format);

    int my_lsa(va_list ap, int *count, const char *format);

    int my_ls(va_list ap, int *count, const char *format);

    typedef struct table_s{
        char c;
        int (*pf)(va_list ap, int *count, const char *format);
    } bob_t;

    static const bob_t tab[] = {
        {'d', lsd},{'r', toto},{'a', my_lsa},{'R', toto},
        {'l', toto},{'t', toto},{'u', toto},{'F', toto},
        {'f', toto},
    };

    void my_putchar(char c);

    int my_strlen( char const *str );

    char *my_strstr(char *str, char const *to_find);

    char *my_strncat(char *dest, char const *src, int nb);

    int my_compute_factorial_it(int nb);


    int my_compute_factorial_rec(int nb);

    int my_compute_power_it(int nb, int p);

    int my_print_alpha(void);

    int boucle(char a, char b, char c);

    int my_print_comb(void);

    int my_print_digits(void);

    int my_putstr(char const *str);

    int my_print_revalpha(void);

    char my_swap_char(void);

    int mptb(unsigned long long nb, char const *base, int *counter);
#endif
