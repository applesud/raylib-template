#include <stdlib.h>
#include "raylib.h"

#include "Menu/Menu.h"
#include "projconstants.h"

int main(void)
{
    // Initialization
    //---------------------------------------------------------
    const int screenWidth = 1920;
    const int screenHeight = 1080;

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(screenWidth, screenHeight, "RayLib: Template");

    SetTargetFPS(144);

    int nextScene = 0;

    int (* scenes[1])() = {Menu_Scene};
    int (* scene)() = scenes[nextScene];


    // Scene Loop
    //---------------------------------------------------------
    while(1) {
        nextScene = ((int(*)())scene)();  // Scene function returns next scene
        if (nextScene == SCENE_EXIT)
            break;
        scene = scenes[nextScene];
    }


    // Exit
    //---------------------------------------------------------
    CloseWindow();  // Close window and OpenGL context
    return 0;
}
