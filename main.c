/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** main
*/

#include "all_struct.h"

int main(void)
{
    RPG_t *rpg = malloc(sizeof(RPG_t));
    memset(rpg, 0, sizeof(RPG_t));
    init_inventory_menu(rpg);
    open_wdw(rpg);
    return 0;
}

