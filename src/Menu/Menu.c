#include "raylib.h"
#include "Menu.h"

int Menu_Scene()
{
    while (1) {
        // NOTE: Render Menu here

        if (WindowShouldClose()) {
            return -1;  // Return exit code
        }
    }
}
