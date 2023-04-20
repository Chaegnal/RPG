/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** draw_text_current
*/

#include "all_struct.h"

void draw_current_text(RPG_t *rpg)
{
    if (rpg->quest.main_quest == 0)
            sfRenderWindow_drawText(rpg->window.wdw,
            rpg->quest.current_quest_grandma, NULL);
        if (rpg->quest.main_quest == 1)
            sfRenderWindow_drawText(rpg->window.wdw,
            rpg->quest.current_quest_shaolin, NULL);
        if (rpg->quest.main_quest == 2)
            sfRenderWindow_drawText(rpg->window.wdw,
            rpg->quest.current_quest_dragon, NULL);
}
