/*
** EPITECH PROJECT, 2022
** my
** File description:
** lsa
*/

#include <stdio.h>
#include <dirent.h>

void my_putstr (char const *str);

int my_lsa(char const *filepath)
{
    struct dirent *dirent;
    DIR *dir = opendir(filepath);
    if (dir == NULL)
        exit(84);
    while ((dirent = readdir(dir)) != NULL) {
        my_putstr(dirent->d_name);
        my_putstr("");
    }
    closedir(dir);
    return 0;
}
