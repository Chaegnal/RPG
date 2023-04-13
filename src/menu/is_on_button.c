/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** is_on_button
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

sfBool is_on_button(menu_t *menu, sfSprite *sprite)
{
    sfFloatRect button_menu = sfSprite_getGlobalBounds(sprite);
    return sfFloatRect_contains(&button_menu,
    menu->mouse_menu.x, menu->mouse_menu.y);
}
