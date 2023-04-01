/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-mypaint-mathis.brehm
** File description:
** include
*/

#ifndef INCLUDE_H_
    #define INCLUDE_H_

    #include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
typedef struct {
    sfVideoMode Mode;
    sfRenderWindow *Window;
} MainWindow;

typedef struct {
    sfTexture* texture_mur;
    sfTexture* texture_sol;
    sfSprite* sprite_mur;
    sfSprite* sprite_sol;
} StructMap;

void init_main_window(MainWindow *main_window);
void init_struct_map(StructMap *struct_map);
void destroy_all(MainWindow *main_window, StructMap *struct_map);
int generate_map(MainWindow *main_window, StructMap *struct_map);
#endif /* !INCLUDE_H_ */
