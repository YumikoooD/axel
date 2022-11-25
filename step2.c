/*
** EPITECH PROJECT, 2022
** stv
** File description:
** ldcs
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/dir.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/sysmacros.h>

void my_putchar(char c);

int nb(int nb);

int my_strlen(char *str);

int myatoi(char *str)
{
    int result = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        result = result * 10 + str[i] - '0';
    }
    return result;
}

int check_first_line(char const *filepath)
{
    if (filepath == NULL) {
        printf("error");
        return 0;
    }
    struct stat st;
    stat(filepath, &st);
    int size = st.st_size + 1;
    char buff[size];
    int o = open(filepath, O_RDONLY, 0);
    read(o, buff, size);
    char* tab = malloc(sizeof(char*) * (size + 1));
    for (int i = 0; buff[i] != '\n'; i++) {
        tab[i] = buff[i];
    }
    int a = myatoi(tab);
    return a;
}

void algo2(int **tab, int i, int j)
{
    int temp = tab[i][j - 1];
    if (tab[i - 1][j] < temp)
        temp = tab[i - 1][j];
    if (tab[i - 1][j - 1] < temp)
        temp = tab[i - 1][j - 1];
    if (temp != 0)
    tab[i][j] = temp + 1;
}

int replacealgo(char *filepath)
{
    int **tab = malloc(sizeof(int*) * (100 * 100 + 10));
    tab = algo(filepath);
    for (int i = 1; i < 100; ++i) {
        // tab[i] = malloc(sizeof(int) * ( 100 + 10));
        for (int j = 1; j < 100; j++) {
            algo2(tab, i, j);
            my_putchar(tab[i][j]);
        }
    }
}

char **load_2d_arr_from_file(char const *filepath)
{
    struct stat st;
    stat(filepath, &st);
    int size = st.st_size;
    char buff[st.st_size + 1];
    int	o = open(filepath, O_RDONLY);
    read(o, buff, st.st_size + 1);
    int x = check_first_line(filepath);
    int i = 0; int r = 0; int m = 0;
    char **tab = malloc(sizeof(char*) * (x + 1000));
    for ( ; i <= x; i++) {
        tab[i] = malloc(sizeof(char) * (x * x + 100));
        for (m = 0; m <= x; m++) {
            if (buff[r] == '.' || buff[r] == 'o' || (buff[r] == '\n' && i != x)) {
                tab[i][m] = buff[r + 1];
            }
            r++;
        }
        tab[i][m] = '\0';
    }
    tab[i] = NULL; return tab;
}

int algo(char *filepath)
{
    if (filepath == NULL) {
        printf("error"); return 0;
    }
    int i = 0;
    int x = check_first_line(filepath);
    char **tab = load_2d_arr_from_file(filepath);
    int **tabl = malloc(sizeof(int) * (x * x + 100));
    for ( ; i <= x; i++) {
        tabl[i] = malloc(sizeof(int) * (x * x + 100));
        for (int m = 0; m <= x; m++) {
            forstyle(tab, tabl, i, m);
        }
    }
    return (tabl);
}

int forstyle(char **tab, int **tabl, int i, int m)
{
    if (tab[i][m] == '.') {
        tabl[i][m] = '1';
        //my_putchar(tabl[i][m]);
    } if (tab[i][m] == 'o') {
        tabl[i][m] = '0';
        //my_putchar(tabl[i][m]);
    } if (tab[i][m] == '\n') {
        //       my_putchar('\n');
    }
    //return (tabl);
}

int main(int ac, char **av)
{
    replacealgo(av[1]);
}
