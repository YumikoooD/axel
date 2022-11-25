/*
** EPITECH PROJECT, 2022
** fezkm*
** File description:
** $ôjef
*/

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++);
    return s1[i] != s2[i];
}
