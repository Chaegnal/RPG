/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** *
*/


#ifndef STRUCT_H_
    #define STRUCT_H_
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>

typedef struct {
    sfVideoMode Mode;
    sfRenderWindow *Window;
} MainWindow;

typedef struct {
    char *buffer;
    sfTexture* texture_mur;
    sfTexture* texture_sol;
    sfSprite* sprite_mur;
    sfSprite* sprite_sol;
} StructMap;

typedef struct {
    sfTexture *texture_sprite;
    sfSprite *sprite;
    sfIntRect rect;
    sfClock *clock;
} StructSprite;

#endif /* !STRUCT_H_ */
