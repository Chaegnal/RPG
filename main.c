/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** main
*/

#include <stdlib.h>
#include "my.h"

int main(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    maps_t *map = malloc(sizeof(maps_t));
    StructSprite *struct_sprite = malloc(sizeof(StructSprite));
    open_wdw(menu, map, struct_sprite);
    return 0;
}
