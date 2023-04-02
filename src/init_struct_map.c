/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** init_struct_map
*/

#include "../include/lib.h"

void init_struct_map(StructMap *struct_map)
{
    struct_map->texture_mur =
        sfTexture_createFromFile("src/map/map_textures/Grass.png", NULL);
    struct_map->texture_sol =
        sfTexture_createFromFile("src/map/map_textures/Gravel.png", NULL);
    struct_map->sprite_mur = sfSprite_create();
    sfSprite_setTexture(struct_map->sprite_mur,
        struct_map->texture_mur, sfTrue);
    struct_map->sprite_sol = sfSprite_create();
    sfSprite_setTexture(struct_map->sprite_sol,
        struct_map->texture_sol, sfTrue);
}
