/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** map_generation
*/

#include "../include/lib.h"

#define LARGEUR_CARTE 20
#define HAUTEUR_CARTE 15
#define TAILLE_TILE 32

const char* carte =
    "11111111111111111111"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "10000000000000000001"
    "11111111111111111111";

void block_choice(MainWindow *main_window, StructMap *struct_map, int i, int j)
{
    int x = j * TAILLE_TILE;
    int y = i * TAILLE_TILE;
    switch (carte[i * LARGEUR_CARTE + j]) {
        case '1':
            sfSprite_setPosition(struct_map->sprite_mur, (sfVector2f){x, y});
            sfRenderWindow_drawSprite(main_window->Window, struct_map->sprite_mur, NULL);
            break;

        case '0':
            sfSprite_setPosition(struct_map->sprite_sol, (sfVector2f){x, y});
            sfRenderWindow_drawSprite(main_window->Window, struct_map->sprite_sol, NULL);
            break;
    }
}

int generate_map(MainWindow *main_window, StructMap *struct_map)
{
    int i = 0;
    int j = 0;
    int x = 0;
    int y = 0;
    for (i = 0; i < HAUTEUR_CARTE; i++) {
        for (j = 0; j < LARGEUR_CARTE; j++) {
            block_choice(main_window, struct_map, i, j);
        }
    }
    return 0;
}