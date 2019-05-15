/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** my.h
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

/*move.c*/
void move_forward(float right, float left, char *result, size_t len);
int move_option(float left, float right);
/*move_back.c*/
void move_back_left2(float left, int n, char *str, char *result);
void move_back_left(float left, int n, char *str, char *result);
void move_back_right2(float right, int n, char *str, char *result);
void move_back_right(float right, int n, char *str, char *result);
/*lib.c*/
void my_putchar(char c);
void my_putstr(char *str);
int count_nbr_size(char *str, int x);
int my_strlen(char *str);
/*info.c*/
float left_info(char *str);
float right_info(char *str, int it);
/*main.c*/
char *my_prompt(void);
void main_loop(char *str, size_t len, char *res);
