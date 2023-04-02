/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-mypaint-mathis.brehm
** File description:
** main
*/

#include "../include/lib.h"

void window_loop(sfEvent event, MainWindow *main_window, StructMap *struct_map)
{
    while (sfRenderWindow_isOpen(main_window->Window)) {
        while (sfRenderWindow_pollEvent(main_window->Window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(main_window->Window);
        }
        generate_map(main_window, struct_map);
        sfRenderWindow_display(main_window->Window);
        sfRenderWindow_clear(main_window->Window, sfColor_fromRGB(100,100,100));
    }
    destroy_all(main_window, struct_map);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    sfEvent event;
    MainWindow main_window;
    StructMap struct_map;
    int status = map_parsing(&struct_map, av);
    if (status == 84) {
        return 84;
    }
    init_main_window(&main_window, &struct_map);
    init_struct_map(&struct_map);
    window_loop(event, &main_window, &struct_map);
}
