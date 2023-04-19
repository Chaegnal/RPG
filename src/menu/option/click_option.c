/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** click_option
*/

#include "all_struct.h"

void option_click(RPG_t *rpg)
{
    if (is_on_button(rpg, rpg->menu.button_option_spr)) {
        if (sfMouse_isButtonPressed(0)) {
            rpg->menu.check_first_menu = 3;
        }
    }
}
