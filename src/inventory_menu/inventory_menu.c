/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** inventory_menu
*/

#include "inventory_menu.h"

void inventory_menu_func(sfRenderWindow *wdw, InventoryMenu_t *inventory_menu)
{
    sfRenderWindow_drawSprite(wdw, inventory_menu->menu, NULL);
}
