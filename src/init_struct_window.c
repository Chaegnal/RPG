/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** init_struct_window
*/

#include "../include/lib.h"

#define LARGEUR_CARTE 20
#define HAUTEUR_CARTE 15
#define TAILLE_TILE 32

void init_main_window(MainWindow *main_window)
{
    main_window->Mode.bitsPerPixel = 32;
    main_window->Mode.height = HAUTEUR_CARTE * TAILLE_TILE;
    main_window->Mode.width = LARGEUR_CARTE * TAILLE_TILE;
    main_window->Window = sfRenderWindow_create(main_window->Mode, "Main window", sfDefaultStyle, NULL);
}
