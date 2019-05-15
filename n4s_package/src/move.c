/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** basic moves
*/

#include "my.h"

void move_forward(float right, float left, char *result, size_t len)
{
    int n = 0;
    char *str;

    if (left > 600 && right < left) {
        write(1, "WHEELS_DIR:0.2\n", 15);
        getline(&str, &len, stdin);
        write(1, "CAR_FORWARD:0.9\n", 16);
        getline(&str, &len, stdin);
        write(1, "WHEELS_DIR:0.2\n", 15);
        getline(&str, &len, stdin);
    }
    if (right > 600 && left < right) {
        write(1, "WHEELS_DIR:-0.2\n", 16);
        getline(&str, &len, stdin);
        write(1, "CAR_FORWARD:0.9\n", 16);
        getline(&str, &len, stdin);
        write(1, "WHEELS_DIR:-0.2\n", 16);
        getline(&str, &len, stdin);
    }
}

int move_option(float left, float right)
{
    int n = 0;
    char *str;
    char *result = NULL;
    size_t len = 0;

    write(1, "CAR_FORWARD:1\n", 14);
    getline(&str, &len, stdin);
    move_back_left(left, 0, str, NULL);
    move_back_right(right, 0, str, NULL);
    if (left < 300 && right < 100) {
        write(1, "CAR_FORWARD:0.2\n", 16);
        getline(&str, &len, stdin);
    }
    move_forward(right, left, NULL, 0);
    return (0);
}
