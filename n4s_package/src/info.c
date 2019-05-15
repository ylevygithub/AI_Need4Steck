/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** info of the lidar
*/

#include "my.h"

float left_info(char *str)
{
    int it = 0;
    int x = 0;
    char *res;
    float nb;

    while (it != 3) {
        if (str[x] == ':')
            it++;
        x++;
    }
    it = 0;
    res = malloc(sizeof(char) * count_nbr_size(str, x) + 2);
    while (str[x] != ':' && str[x]) {
        res[it] = str[x];
        x++;
        it++;
    }
    res[it] = '\0';
    nb = atof(res);
    return (nb);
}

float right_info(char *str, int it)
{
    int x = 0;
    char *res;
    float nb;

    while (it != 34) {
        if (str[x] == ':')
            it++;
        x++;
    }
    it = 0;
    res = malloc(sizeof(char) * count_nbr_size(str, x) + 2);
    while (str[x] != ':' && str[x]) {
        res[it] = str[x];
        x++;
        it++;
    }
    res[it] = '\0';
    nb = atof(res);
    return (nb);
}
