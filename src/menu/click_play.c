/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** click_play
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void click_play(menu_t *menu)
{
    if (is_on_button(menu, menu->button_play_spr)) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_first_menu = 6;
        }
    }
}
