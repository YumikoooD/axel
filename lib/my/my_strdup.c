/*
** EPITECH PROJECT, 2022
** kabf
** File description:
** fnale
*/

char *my_strdup(char *str)
{
    char *cpy = malloc(sizeof(char) * (my_strlen(str) + 1));
    int n = 0;
    while (str[n] != '\0') {
        cpy[n] = str[n];
        n += 1;
    }
    cpy[n] = '\0';
    return cpy;
}
