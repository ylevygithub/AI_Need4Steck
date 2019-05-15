/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** move back functions
*/

#include "my.h"

void move_back_left2(float left, int n, char *str, char *result)
{
    size_t len = 0;

    write(1, "WHEELS_DIR:0.9\n", 15);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "WHEELS_DIR:-0.7\n", 16);
    getline(&str, &len, stdin);
}

void move_back_left(float left, int n, char *str, char *result)
{
    size_t len = 0;

    if (left < 70) {
        write(1, "CAR_BACKWARDS:1\n", 16);
        getline(&str, &len, stdin);
        write(1, "CAR_BACKWARDS:1\n", 16);
        getline(&str, &len, stdin);
        write(1, "CAR_BACKWARDS:1\n", 16);
        getline(&str, &len, stdin);
        move_back_left2(left, 0, str, NULL);
    }
}

void move_back_right2(float right, int n, char *str, char *result)
{
    size_t len = 0;

    write(1, "WHEELS_DIR:-0.9\n", 16);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "CAR_BACKWARDS:1\n", 16);
    getline(&str, &len, stdin);
    write(1, "WHEELS_DIR:0.7\n", 15);
    getline(&str, &len, stdin);
}

void move_back_right(float right, int n, char *str, char *result)
{
    size_t len = 0;

    if (right < 70) {
        write(1, "CAR_BACKWARDS:1\n", 16);
        getline(&str, &len, stdin);
        write(1, "CAR_BACKWARDS:1\n", 16);
        getline(&str, &len, stdin);
        write(1, "CAR_BACKWARDS:1\n", 16);
        getline(&str, &len, stdin);
        move_back_right2(right, 0, str, NULL);
    }
}
