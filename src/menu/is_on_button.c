/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** is_on_button
*/

#include "all_struct.h"

sfBool is_on_button(RPG_t *rpg, sfSprite *sprite)
{
    sfFloatRect button_menu = sfSprite_getGlobalBounds(sprite);
    return sfFloatRect_contains(&button_menu,
    rpg->menu.mouse_menu.x, rpg->menu.mouse_menu.y);
}
