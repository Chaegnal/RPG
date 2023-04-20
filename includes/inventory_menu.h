/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** inventory_menu
*/

#ifndef INVENTORY_MENU_H_
    #define INVENTORY_MENU_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

    typedef struct {
        sfEvent evt;
        sfTexture *menu_texture;
        sfSprite *menu;
        int keyI_pressed;
        sfRectangleShape *rect_char_menu;
        sfText *stat;
        sfText *health;
        sfText *xp;
        sfText *atk;
        sfText *def;
        sfText *level;
        sfSprite *button_saving;
        sfText *saving;
        sfSprite *button_loading;
        sfText *loading;
        sfSprite *button_settings;
        sfText *settings;
    } InventoryMenu_t;

#endif /* !INVENTORY_MENU_H_ */
