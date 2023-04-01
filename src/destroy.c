/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** destroy
*/

#include "../include/lib.h"

void destroy_all(MainWindow *main_window, StructMap *struct_map)
{
    sfSprite_destroy(struct_map->sprite_mur);
    sfSprite_destroy(struct_map->sprite_sol);
    sfTexture_destroy(struct_map->texture_mur);
    sfTexture_destroy(struct_map->texture_sol);
    sfRenderWindow_destroy(main_window->Window);
}
