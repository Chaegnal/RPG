/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** move_sprite
*/

#include "../include/lib.h"

static void move_rect(sfIntRect *rect, sfClock *clock)
{
    sfTime time;
    float seconds;
    int max_value = 300;
    int offset = 22;

    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.5) {
        rect->left = rect->left + offset;
        sfClock_restart(clock);
    }
    if (rect->left == max_value) {
        rect->left = 0;
    }
}

static void move_sprite_left_right(sfEvent event, StructSprite *struct_sprite)
{
    if (event.type == sfEvtKeyPressed) {
        switch (event.key.code) {
            case sfKeyLeft:
                sfIntRect rect1 = {0, 97, 20, 32};
                move_rect(&rect1, struct_sprite->clock);
                sfSprite_setTextureRect(struct_sprite->sprite, rect1);
                sfSprite_move(struct_sprite->sprite,
                    (sfVector2f){-TAILLE_TILE / 4, 0});
            break;
            case sfKeyRight:
                sfIntRect rect2 = {50, 32, 20, 32};
                move_rect(&rect2, struct_sprite->clock);
                sfSprite_setTextureRect(struct_sprite->sprite, rect2);
                sfSprite_move(struct_sprite->sprite,
                    (sfVector2f){TAILLE_TILE / 4, 0});
                break;
        }
    }
}

static void move_sprite_up_down(sfEvent event, StructSprite *struct_sprite)
{
    if (event.type == sfEvtKeyPressed) {
        switch (event.key.code) {
            case sfKeyUp:
                sfIntRect rect3 = {0, 0, 20, 32};
                move_rect(&rect3, struct_sprite->clock);
                sfSprite_setTextureRect(struct_sprite->sprite, rect3);
                sfSprite_move(struct_sprite->sprite,
                    (sfVector2f){0, -TAILLE_TILE / 4});
                break;
            case sfKeyDown:
                sfIntRect rect4 = {0, 64, 20, 32};
                move_rect(&rect4, struct_sprite->clock);
                sfSprite_setTextureRect(struct_sprite->sprite, rect4);
                sfSprite_move(struct_sprite->sprite,
                    (sfVector2f){0, TAILLE_TILE / 4});
                break;
        }
    }
}

void move_sprite(sfEvent event, StructSprite *struct_sprite)
{
    move_sprite_left_right(event, struct_sprite);
    move_sprite_up_down(event, struct_sprite);
}
