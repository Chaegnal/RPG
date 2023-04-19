/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** destroy_menu
*/

#include "all_struct.h"
#include "inventory_menu.h"

void destroy_inventory_menu(RPG_t *rpg)
{
    sfSprite_destroy(rpg->inventory_menu.menu);
    sfTexture_destroy(rpg->inventory_menu.menu_texture);
}
