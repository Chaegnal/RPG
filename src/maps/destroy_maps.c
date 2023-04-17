/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** destroy_maps
*/

#include "maps.h"

void destroy_maps(maps_t *map)
{
    sfSprite_destroy(map->map1_spr);
    sfTexture_destroy(map->map1_txr);
    sfImage_destroy(map->map1);
    sfSprite_destroy(map->map2_spr);
    sfTexture_destroy(map->map2_txr);
    sfImage_destroy(map->map2);
    sfSprite_destroy(map->map3_spr);
    sfTexture_destroy(map->map3_txr);
    sfImage_destroy(map->map3);
    sfSprite_destroy(map->map4_spr);
    sfTexture_destroy(map->map4_txr);
    sfImage_destroy(map->map4);
    sfSprite_destroy(map->map5_spr);
    sfTexture_destroy(map->map5_txr);
    sfImage_destroy(map->map5);
}
