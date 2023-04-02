/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-eva.legrand
** File description:
** map_parsing
*/

#include "../include/lib.h"

int map_parsing(StructMap *struct_map, char **av)
{
    int i = 0;
    struct stat sb;
    stat(av[1], &sb);

    struct_map->buffer = malloc((sizeof(char)) * (sb.st_size + 1));
    int fd = open(av[1], O_RDONLY);
    if (fd < 0) {
        return 84;
    }
    read(fd, struct_map->buffer, sb.st_size);
    struct_map->buffer[sb.st_size] = '\0';
    return 0;
}
