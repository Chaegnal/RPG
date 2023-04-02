/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** get_size_map
*/

#include "../include/lib.h"

int get_height_size_map(char *buffer)
{
    int x = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            x++;
        }
    }
    return x;
}

int get_width_size_map(char *buffer)
{
    int y = 0;
    for (int k = 0; buffer[k] != '\0'; k++) {
        if (buffer[y] != '\n') {
            y++;
        }
    }
    return y;
}
