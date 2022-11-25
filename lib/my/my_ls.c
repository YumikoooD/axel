/*
** EPITECH PROJECT, 2022
** ls
** File description:
** ls
*/

#include <stdio.h>
#include <dirent.h>
#include <stdarg.h>

void my_putstr(char const *str);

int my_ls(DIR* d)
{
    struct dirent *dir;
    d = opendir(".");
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_name[0] != '.') {
            my_putstr(dir->d_name);
            my_putchar(' ');
        }
    }
    closedir(d);
    return 0;
}
