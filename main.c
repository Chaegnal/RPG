/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** main
*/

#include <stdlib.h>
#include "my.h"
#include "menu.h"

int main(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    open_wdw(menu);
    return 0;
}
