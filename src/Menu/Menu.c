#include "raylib.h"

#include "Menu.h"


int Menu_Scene()
{
    // NOTE: Initialise scene here
    
    while (1) {
        // NOTE: Update scene here

        BeginDrawing();
            ClearBackground(RAYWHITE);
            // NOTE: Render menu here
        EndDrawing();

        if (WindowShouldClose()) {
            return -1;  // Return exit code
        }
    }
}
