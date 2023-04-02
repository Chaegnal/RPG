/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** init_struct_sprite
*/

#include "../include/lib.h"

void init_struct_sprite(StructSprite *struct_sprite)
{
    struct_sprite->texture_srpite =
        sfTexture_createFromFile("src/sprite/Fumiko.png", NULL);
    struct_sprite->sprite = sfSprite_create();
    struct_sprite->rect.left = 0;
    struct_sprite->rect.top = 0;
    struct_sprite->rect.width = 30;
    struct_sprite->rect.height = 30;
    sfSprite_setTexture(struct_sprite->sprite,
        struct_sprite->texture_srpite, sfTrue);
    sfSprite_setTextureRect(struct_sprite->sprite, struct_sprite->rect);
    sfSprite_setPosition(struct_sprite->sprite, (sfVector2f){100, 100});
    struct_sprite->clock = sfClock_create();
}
