/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** lib functions
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int x = 0;

    while (str[x]) {
        my_putchar(str[x]);
        x++;
    }
}

int count_nbr_size(char *str, int x)
{
    int y = 0;

    while (str[x] && str[x] != ':') {
        x++;
        y++;
    }
    return (y);
}

int my_strlen(char *str)
{
    int x = 0;

    while (str[x])
        x++;
    return (x);
}
