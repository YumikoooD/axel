/*
** EPITECH PROJECT, 2022
** ldlsk
** File description:
** lkfzed
*/

int my_putstrk(char const *str)
{
    for (int i = 0; str[i] != '\0'; i ++) {
        my_putchar(str[i]);
    }
    my_putchar('\n');
}
