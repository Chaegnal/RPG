/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** move_sprite
*/

#include "../include/lib.h"

static void move_sprite_left_right(sfEvent event, sfSprite *sprite)
{
    if (event.type == sfEvtKeyPressed) {
        switch (event.key.code) {
            case sfKeyLeft:
                sfIntRect rect1 = {0, 97, 20, 32};
                sfSprite_setTextureRect(sprite, rect1);
                sfSprite_move(sprite, (sfVector2f){-TAILLE_TILE / 2, 0});
            break;
            case sfKeyRight:
                sfIntRect rect2 = {50, 32, 20, 32};
                sfSprite_setTextureRect(sprite, rect2);
                sfSprite_move(sprite, (sfVector2f){TAILLE_TILE / 2, 0});
                break;
        }
    }
}

static void move_sprite_up_down(sfEvent event, sfSprite *sprite)
{
    if (event.type == sfEvtKeyPressed) {
        switch (event.key.code) {
            case sfKeyUp:
                sfIntRect rect3 = {0, 0, 20, 32};
                sfSprite_setTextureRect(sprite, rect3);
                sfSprite_move(sprite, (sfVector2f){0, -TAILLE_TILE / 2});
                break;
            case sfKeyDown:
                sfIntRect rect4 = {0, 64, 20, 32};
                sfSprite_setTextureRect(sprite, rect4);
                sfSprite_move(sprite, (sfVector2f){0, TAILLE_TILE / 2});
                break;
        }
    }
}

void move_sprite(sfEvent event, sfSprite *sprite)
{
    move_sprite_left_right(event, sprite);
    move_sprite_up_down(event, sprite);
}
