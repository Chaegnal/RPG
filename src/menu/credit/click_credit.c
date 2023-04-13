/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** click_credit
*/


#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"
#include "menu.h"

void credit_click(menu_t *menu)
{
    if (is_on_button(menu, menu->button_credit_spr)) {
        if (sfMouse_isButtonPressed(0)) {
            menu->check_first_menu = 4;
        }
    }
}
