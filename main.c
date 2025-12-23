#include "raylib.h"

int main(){
    //Initialization
    //Screen Settings
    int screenHeight = 450;
    int screenWidth = 800;
    

    InitWindow(screenWidth, screenHeight, "OVO RADI ZA DIVNO CUDO");

    //Textures
    Texture2D back_ground = LoadTexture("C:/raylib/raylib/projects/SuperMarioClone/sky_texture.png");
    Texture2D ground_tiles = LoadTexture("C:/raylib/raylib/projects/SuperMarioClone/ground_texture.png");
    

    SetTargetFPS(60);
    while (!WindowShouldClose()){
    //Update(variables)

    BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(back_ground, screenWidth/2 - back_ground.width/2, screenHeight/2 - back_ground.height/2, WHITE);
        DrawTexture(ground_tiles, screenWidth/2 - ground_tiles.width/2, screenHeight/2 - ground_tiles.height/2, WHITE);
        DrawText("Ispod ovog teksta treba biti plavo", 190, 200, 20, PINK);

    EndDrawing();
    }
    //De-Initilization
    UnloadTexture(back_ground);
    UnloadTexture(ground_tiles);

    CloseWindow();
    return 0;
}