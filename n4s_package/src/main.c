/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** main
*/

#include "my.h"

char *my_prompt(void)
{
    char *str;
    char *result = NULL;
    size_t len = 0;
    int it = 0;

    write(1, "GET_INFO_LIDAR\n", 16);
    getline(&str, &len, stdin);
    result = malloc(sizeof(char) * my_strlen(str) + 1);
    while (str[it]) {
        result[it] = str[it];
        it++;
    }
    result[it] = '\0';
    free(str);
    return (result);
}

void main_loop(char *str, size_t len, char *res)
{
    float left;
    float right;

    write(1, "CAR_FORWARD:0.4\n", 16);
    getline(&str, &len, stdin);
    res = my_prompt();
    fprintf(stderr, "%s\n", res);
    left = left_info(res);
    fprintf(stderr, "%.2f\n", left);
    right = right_info(res, 0);
    fprintf(stderr, "%.2f\n", right);
    move_option(left, right);
}

int main(int ac, char **av)
{
    char *str;
    size_t len = 0;
    char *res;
    float left;
    float right;

    write(1, "START_SIMULATION\n", 17);
    getline(&str, &len, stdin);
    while (1) {
        main_loop(str, 0, res);
    }
    my_putstr(res);
    return (0);
}
