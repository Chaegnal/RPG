/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** include
*/

#ifndef INCLUDE_H_
    #define INCLUDE_H_
    #define TAILLE_TILE 32
    #include "struct.h"
    #include <stdio.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <stdlib.h>

void init_main_window(MainWindow *main_window, StructMap *struct_map);
void init_struct_map(StructMap *struct_map);
void destroy_all(MainWindow *main_window,
    StructMap *struct_map, StructSprite *struct_sprite);
int generate_map(MainWindow *main_window, StructMap *struct_map);
int get_height_size_map(char *buffer);
int get_width_size_map(char *buffer);
int map_parsing(StructMap *struct_map, char **av);
void init_struct_sprite(StructSprite *struct_sprite);
void move_sprite(sfEvent event, StructSprite *struct_sprite);
#endif /* !INCLUDE_H_ */
