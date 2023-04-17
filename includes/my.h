/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** my
*/


#ifndef MY_H_
    #define MY_H_

    #include "menu.h"
    #include "maps.h"

typedef struct game_s {
    sfEvent event;
} game_t;

void open_wdw(menu_t *menu, maps_t *map, StructSprite *struct_sprite);

#endif /* !MY_H_ */
