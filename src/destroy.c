/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** destroy
*/

#include "all_struct.h"

void destroy_all(RPG_t *rpg)
{
    destroy_history(rpg);
    destroy_menu(rpg);
    destroy_maps(rpg);
    destroy_sprites_maps(rpg);
    destroy_quest(rpg);
    destroy_fight(rpg);
}
