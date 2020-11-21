#include <stdlib.h>
#include "raylib.h"

#include "Menu/Menu.h"
#include "BouncingBallClick/BouncingBallClick.h"
#include "PoppingSquareClick/PoppingSquareClick.h"

int main(void)
{
    // Initialization
    //---------------------------------------------------------

    const int screenWidth = 1920;
    const int screenHeight = 1080;

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(screenWidth, screenHeight, "RayLib: Template");

    SetTargetFPS(144);

    int nextScene = 0;  // -1 means exit

    int (* scenes[1])() = {Menu_Scene};
    int (* scene)() = scenes[nextScene];


    // Scene Switching Loop
    //---------------------------------------------------------

    while (nextScene != -1)  // Continue to switch scenes until scene exit (-1) returned
    {
        nextScene = (* scene)();  // Scene function returns next scene
        scene = scenes[nextScene];
    }


    // Exit
    //---------------------------------------------------------

    CloseWindow();  // Close window and OpenGL context

    return 0;
}
