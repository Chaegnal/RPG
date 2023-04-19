/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** inventory_menu
*/

// #include "inventory_menu.h"
#include "all_struct.h"

void inventory_menu_func(sfRenderWindow *wdw, RPG_t *rpg)
{
    sfRenderWindow_drawSprite(wdw, rpg->inventory_menu.menu, NULL);
}

void press_inventory(RPG_t *rpg)
{
    if (rpg->inventory_menu.keyI_pressed == 1)
        rpg->inventory_menu.keyI_pressed = 0;
    else if (rpg->inventory_menu.keyI_pressed == 0)
        rpg->inventory_menu.keyI_pressed = 1;
}
