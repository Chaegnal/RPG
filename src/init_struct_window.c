/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** init_struct_window
*/

#include "../include/lib.h"

void init_main_window(MainWindow *main_window, StructMap *struct_map)
{
    int height = get_height_size_map(struct_map->buffer);
    int width = get_width_size_map(struct_map->buffer);
    main_window->Mode.bitsPerPixel = 32;
    main_window->Mode.height = height * TAILLE_TILE;
    main_window->Mode.width = width * TAILLE_TILE;
    main_window->Window = sfRenderWindow_create(main_window->Mode,
        "My_RPG", sfDefaultStyle, NULL);
}
