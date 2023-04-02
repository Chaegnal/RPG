/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** map_generation
*/

#include "../include/lib.h"

void block_choice(MainWindow *main_window, StructMap *struct_map, int i, int j)
{
    int x = j * TAILLE_TILE;
    int y = i * TAILLE_TILE;
    int width = get_width_size_map(struct_map->buffer) + 1;

    switch (struct_map->buffer[i * width + j]) {
        case 'X':
            sfSprite_setPosition(struct_map->sprite_mur, (sfVector2f){x, y});
            sfRenderWindow_drawSprite(main_window->Window,
                struct_map->sprite_mur, NULL);
            break;

        case ' ':
            sfSprite_setPosition(struct_map->sprite_sol, (sfVector2f){x, y});
            sfRenderWindow_drawSprite(main_window->Window,
                struct_map->sprite_sol, NULL);
            break;
    }
}

int generate_map(MainWindow *main_window, StructMap *struct_map)
{
    int i = 0;
    int j = 0;
    int height = get_height_size_map(struct_map->buffer);
    int width = get_width_size_map(struct_map->buffer);

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            block_choice(main_window, struct_map, i, j);
        }
    }
    return 0;
}
