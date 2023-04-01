/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-mypaint-mathis.brehm
** File description:
** main
*/

#include "../include/lib.h"
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>

typedef struct {
    sfVideoMode Mode;
    sfRenderWindow *Window;
} MainWindow;

static void init_main_window(MainWindow *main_window)
{
    main_window->Mode.bitsPerPixel = 32;
    main_window->Mode.height = 1080;
    main_window->Mode.width = 1920;
    main_window->Window = sfRenderWindow_create(main_window->Mode, "Main window", sfDefaultStyle, NULL);
}

void window_loop(sfEvent event, MainWindow *main_window)
{
    while (sfRenderWindow_isOpen(main_window->Window)) {
        while (sfRenderWindow_pollEvent(main_window->Window, &event))
        {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(main_window->Window);
        }
        sfRenderWindow_clear(main_window->Window, sfColor_fromRGB(100,100,100));
        sfRenderWindow_display(main_window->Window);
    }
}

int main(int argc, char **argv)
{
    sfEvent event;
    MainWindow main_window;
    init_main_window(&main_window);
    window_loop(event, &main_window);
}
