#include "raylib.h"

#include "../projconstants.h"
#include "Menu.h"


int Menu_Scene()
{
    // NOTE: Initialise scene here
    
    while (!WindowShouldClose()) {
        // NOTE: Update scene here

        BeginDrawing();
            ClearBackground(RAYWHITE);
            // NOTE: Render menu here
        EndDrawing();
    }
    return SCENE_EXIT;  // Return exit code
}
