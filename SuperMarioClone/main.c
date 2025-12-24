#include "raylib.h"
#include "player.h"

void InitPlayer(struct Player *player);
void UpdatePlayer(struct Player *player, float delta);

int main(){
    //Initialization
    //Screen Settings
    int screenHeight = 450;
    int screenWidth = 800;
    

    InitWindow(screenWidth, screenHeight, "Super Mario Clone");

    //Textures
    Texture2D back_ground = LoadTexture("C:/raylib/raylib/projects/SuperMarioClone/sky_texture.png");
    Texture2D ground_tiles = LoadTexture("C:/raylib/raylib/projects/SuperMarioClone/ground_texture.png");
    Image window_icon = LoadImage("C:/raylib/raylib/projects/SuperMarioClone/ground_texture.png");
    SetWindowIcon(window_icon);
    
    
    SetTargetFPS(60);
    //Player
    struct Player player;
    InitPlayer(&player);
    //Camera
    Camera2D player_camera = { 0 };
    player_camera.target = player.position;
    player_camera.zoom = 1.0f;
    player_camera.offset = (Vector2) { screenWidth/2.0f, screenHeight/2.0f };

    while (!WindowShouldClose()){
    //Update(variables)
    float delta = GetFrameTime();
    UpdatePlayer(&player, delta);
    player_camera.target = (Vector2){ player.position.x, player.position.y};

    BeginDrawing();
        ClearBackground(RAYWHITE);
        BeginMode2D(player_camera);
        
        DrawTexture(back_ground, 0, 0, WHITE);
        DrawTexture(ground_tiles, 0, 400, WHITE);
        DrawTexture(player.player_texture, player.position.x - player.player_texture.width/2, player.position.y - player.player_texture.height/2, WHITE);
        DrawText("Ispod ovog teksta treba biti plavo", 190, 200, 20, PINK);

        EndMode2D();
    EndDrawing();
    }
    //De-Initilization
    UnloadTexture(back_ground);
    UnloadTexture(ground_tiles);
    UnloadTexture(player.player_texture);
    UnloadImage(window_icon);
    
    CloseWindow();
    return 0;
}